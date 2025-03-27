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
	Mat img(512, 512, CV_8UC3, Scalar(136, 255, 109));
	rectangle(img, Point(100, 100), Point(412, 300), Scalar(24, 125, 2), FILLED);

	circle(img, Point(256, 256), 150, Scalar(44, 84, 232), FILLED);
	line(img, Point(100, 300), Point(412, 300), Scalar(255, 255, 255), 3);

	putText(img, "OpenCV", Point(150, 250), FONT_HERSHEY_COMPLEX, 1.75, Scalar(243, 244, 246),1);

	imshow("Original", img);
	cout << "Original showing .....\n";

	waitKey(0);
	return 0;

}
 