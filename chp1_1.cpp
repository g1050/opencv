#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>

using namespace cv;
using namespace std;

void readImage()
{
    //importing images
    string path =  "./resources/test.png";
    Mat img = imread(path);
    imshow("Image",img);
    waitKey(0);
    return ;
}

void readVideo()
{
    string path = "./resources/test_video.mp4";
    VideoCapture cap(path);
    Mat img;

    //user while loop to show every frame,actually show every picture
    //it will look like a viedo
    while(true){
        cap.read(img);
        imshow("Video",img);
        waitKey(1);
    }
    return ;
}

void testWebcam()
{
    int id = 0;
    VideoCapture cap(id);
    Mat img;

    //user while loop to show every frame,actually show every picture
    //it will look like a viedo
    while(true){
        cap.read(img);
        imshow("Video",img);
        waitKey(1);
    }
    return ;
}

int main()
{
    // readVideo();
    testWebcam();
    return 0;
}