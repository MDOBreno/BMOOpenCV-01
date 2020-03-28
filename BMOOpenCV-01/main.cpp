//
//  main.cpp
//  BMOOpenCV-01
//
//  Created by Breno Medeiros on 28/03/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>
#include <stdio.h>
#include <stdlib.h>

using namespace cv;
using namespace std;

int main(int argv, char** argc) {
//int main(int argc, const char * argv[]) {
    // insert code here...
    String caminho = "/Users/brenomedeiros/Documents/ProgramasBMO/Cpp/BMOOpenCV-01/BMOOpenCV-01/Images/";
    cout << "OpenCV Version " << CV_VERSION << std::endl;
    //Mat test  = cv::imwrite();
    Mat teste = imread(caminho+"Me.jpeg", CV_LOAD_IMAGE_UNCHANGED);
    imshow("teste", teste);
    waitKey();
    return 0;
}
