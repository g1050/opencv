//
//  main.cpp
//  Opencv
//
//  Created by dg on 2022/7/21.
//
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    string path = "/Users/dg/code/Opencv/Opencv/resources/test.png";
    Mat img = imread(path);
    imshow("image",img);
    waitKey(0);
    return 0;
}
