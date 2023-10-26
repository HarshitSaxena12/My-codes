#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;


//////////////////////// BASIC IMAGE FUCNTIONS ////////////////////


void main()
{
	string path="Resources/test.png";
	Mat img = imread(path);
	Mat imggray;
	Mat imgblur;
	Mat imgcanny,imgdia,imgero;
	//Mat is a matrix datatype in open cv tohandle all the images

	cvtColor(img, imggray, COLOR_BGR2GRAY);

	// cvtColor is used to change image color


	GaussianBlur(img, imgblur,Size(1,1),5,0);

	// GaussianBlur blurs the image

	Canny(img, imgcanny, 50, 100);
	// Canny is used to detect the edges

	Mat kernel = getStructuringElement(MORPH_RECT, Size(2,2));
	dilate(imgcanny, imgdia,kernel);
	// dialate is used to mark the edges with more thickness

	erode(imgdia, imgero, kernel);
	// erode enhances dialate image

	imshow("image", img);
	imshow("gray image", imggray);
	imshow("blur image", imgblur);
	imshow("canny image", imgcanny);
	imshow("dialate image", imgdia);
	imshow("erode image", imgero);
	waitKey(0);
}
