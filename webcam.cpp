
//
//  webcam.cpp
//  opencv
//
//  Created by Shray Anand on 12/02/21.
//

#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main(){
    VideoCapture cap(0);
    Mat img;
    while(true){
        cap.read(img);
        imshow("Image",img);
        waitKey(1);
    }
    return 0;
}

