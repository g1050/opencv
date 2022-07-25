#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    string path = "./resources/test.png";
    Mat img = imread(path);
    Mat imgGray;
    Mat imgBlur;
    Mat imgCanny;

    cvtColor(img,imgGray,COLOR_BGR2GRAY);
    GaussianBlur(img,imgBlur,Size(7,7),5,0);
    Canny(img,imgCanny,50,150);

    imshow("Image",imgBlur);
    imshow("Image Gray",imgGray);
    imshow("Image Blur",imgBlur);
    imshow("Image Canny",imgCanny);


    waitKey(0);
    return 0;
}