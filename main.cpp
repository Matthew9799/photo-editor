#include <stdio.h>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "include/accelerator.hpp"

using namespace cv;

int main(int argc, const char **argv) {
    Mat frame;
    Accelerator dev;

    frame = imread("matt.JPG");

    Mat result = dev.gaussian_blur(frame,3,1.0);

    imshow("result", result);
    //Launch GUI to select image

    //assume we have image


    return 0;
}