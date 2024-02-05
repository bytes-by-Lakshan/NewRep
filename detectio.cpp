#include "opencv2\highgui.hpp"
#include "opencv2\highgui.hpp"

int main()
{
	//creating video capturing option

	cv::VideoCapture video(0);

	if (!video.isOpened()) return -1;

	cv::Mat frame; //array of class to store frames


	while (video.read(frame)) //executes till the videos last frame
	{
		cv::imshow("video feed", frame); // displays the frame

		if (cv::waitKey(25) >= 0) break; // ends the video early if any key is pressed on the keyboard within the 25 ms delay
	}


		return  0;
}