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
	// resize image 
	Mat img_resize , img_crop;
	cout << "img size : " << img.size() << endl;
	// resize image 
	resize(img, img_resize, Size(), 0.5, 0.5);
	Rect roi(250, 350, 350, 200);
	img_crop = img(roi);


	imshow("Original", img);
	cout << "Original showing .....\n";
	imshow("Resize", img_resize);
	cout << "Resized Image showing .....\n";
	imshow("Crop", img_crop);
	cout << "Crop Image showing .....\n";

	waitKey(0);
	return 0;

}
