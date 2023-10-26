#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;


//////////////////////// IMPORTING IMAGES ////////////////////


//void main()
//{
//	string path="Resources/test.png";
//	Mat img = imread(path);
//
//	//Mat is a matrix datatype in open cv tohandle all the images
//
//	imshow("image", img);
//	waitKey(0);
//}



///////////////////////Importing Videos///////////////////

//video is a collection of images/frames played continously

//void main()
//{
//	string path = "Resources/test_video.mp4";
//
//	VideoCapture cap(path);
//
//	//cap is the object of function of VideoCapture
//	Mat img;
//
//	while (true)
//	{
//		cap.read(img);
//		imshow("image", img);
//		waitKey(900);
//		
//}
//}



///////////////////////   IMPOERTING FROM WEBCAM ////////////////////////

void main()
{
	VideoCapture cap(0);
	Mat img;

	while (true)
	{
		cap.read(img);
		imshow("image", img);
		waitKey(1);
	}
}