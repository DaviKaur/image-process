//header files
#include "opencv2/highgui/highgui.hpp"
#include<iostream>

using namespace cv;
using namespace std;

int main()
{
        Mat img = imread("e.png", CV_LOAD_IMAGE_UNCHANGED); //read the image data in the file "a.JPG" and store it in 'img'

        if(img.empty()) //check whether the image is loaded or not
        {
                cout<<"Error:Image cannot be loaded..!!"<<endl;
                system("pause");   //wait for a key press
                return -1;
        }

        namedWindow("MyWindow", CV_WINDOW_AUTOSIZE);  //create a window with name "MyWindow"

        imshow("MyWindow", img);   //display the image which is stored in the 'img' in the "MyWindow" window

        waitKey(0);   //wait infinite time for a keypress
        destroyWindow("MyWindow");  //destroy the window with the name, "MyWindow"

        return 0;
}


