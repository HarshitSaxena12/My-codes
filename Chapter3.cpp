#include<opencv2/imgcodecs.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include<iostream>

using namespace std;
using namespace cv;


//////////////////////// RESIZE AND CROP ////////////////////


void main()
{
	string path = "Resources/tush.jpg";
	Mat img = imread(path);
	Mat imgresize,imgcrop;
	
	
	resize(img,imgresize,Size(),0.75,0.75);
	// resize isused to resize the image using pixels 
	cout << img.size << endl;

	Rect abc(100, 100, 300, 250);
	//Rect is a datatype used for images only


	imgcrop = img(abc);

	imshow("image", img);
	imshow("resized image", imgresize);
	imshow("cropped image", imgcrop);
	waitKey(0);
}
