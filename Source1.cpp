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
	/*string Imagepath = "Resources/img.png";
	Mat img = imread(Imagepath);
	imshow("image", img);*/
	//cout << "image showing .....\n";
	//waitKey(5000); 

	//read movies or videos 
	/*string vid_path = "Resources/movie.mp4";
	VideoCapture cap(vid_path);
	Mat frame;
	while (true) {
		cap.read(frame);
		if (frame.empty()) 
			break;
			imshow("Video", frame);

				cout << "Video Playing .....\n";
			waitKey(0);
		
	}
	waitKey(0);*/
	//webcame reading 
	VideoCapture cap(0);
	Mat frame;
	while (true) {
		cap.read(frame);
		if (frame.empty())
			break;
		imshow("WebCam", frame);
		cout << "WebCam Starting .....\n";
		waitKey(0);

	}


	waitKey(0);

	return 0;

}