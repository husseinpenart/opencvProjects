#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
// include logger for diaballing logs
#include <opencv2/core/utils/logger.hpp>
using namespace std;
using namespace cv;
int main() {
	//disable cv log
	cv::utils::logging::setLogLevel(cv::utils::logging::LogLevel::LOG_LEVEL_SILENT);

	/*cout << "OpenCV version: " << CV_VERSION;*/
	 //define the path of image  
	string img_path = "Resources/img2.jpg";
	Mat img = imread(img_path);
	Mat img_gray , img_blur, img_canny,img_dilate, img_erode;
	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
	cvtColor(img, img_gray, COLOR_BGR2GRAY);
	GaussianBlur(img, img_blur, Size(7, 15), 0, 0);
	Canny(img_blur, img_canny , 25,75);
	dilate(img_canny, img_dilate, kernel);
	erode(img_dilate, img_erode, kernel);




	imshow("Original", img);
	cout << "Original showing .....\n";
	imshow("Canny", img_canny);
	cout << "Canny showing .....\n";
	imshow("Dilet", img_dilate);
	cout << "Dilet showing .....\n";
	imshow("Erode", img_erode);
	cout << "Erode showing .....\n";
	//imshow("Gray", img_gray);
	//cout << "Gray showing .....\n";
	//imshow("Blur", img_blur);
	//cout << "Blur showing .....\n";

	waitKey(0);
	return 0;

}
     