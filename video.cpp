//
//  video.cpp
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
    string path ="Resources/aande.mp4";
    VideoCapture cap(path);
    Mat video;
    while(true){
        cap.read(video);
        imshow("Video",video);
        waitKey(45);
    }
    return 0;
}

