//
//  image.cpp
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
    string path ="Resources/shray.png";
    Mat img = imread(path);
    Mat imgGray , imgBlur , imgCanny , imgDil , imgErode , imgResize , imgCrop;
    
    Mat kernel = getStructuringElement(MORPH_RECT, Size(3,3));
    Rect rectangle(50,50,200,250);
    imgCrop=img(rectangle);
    
    cvtColor(img,imgGray,COLOR_BGR2GRAY);
    GaussianBlur(img,imgBlur,Size(3,3),3,0);
    Canny(imgBlur,imgCanny,25,75);
    dilate(imgCanny,imgDil,kernel);
    erode(imgDil,imgErode,kernel);
    resize(img, imgResize,Size(),0.5,0.5);
    
    imshow("Image",img);
    imshow("Image Gray",imgGray);
    imshow("Image Blur",imgBlur);
    imshow("Image Canny",imgCanny);
    imshow("Image Dilation",imgDil);
    imshow("Image Erode",imgErode);
    imshow("Image Resized",imgResize);
    imshow("Image Cropped",imgCrop);
    
    waitKey(0);
    return 0;
