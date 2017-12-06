#include "myf.h"

CvCapture *pari_StartImageAcquisition()
{
  CvCapture *capture = cvCaptureFromCAM(0);              //Capture using 1st camera: i.e., no. 0
  IplImage *frame=cvQueryFrame(capture);                 //Update frame. Pointer does not change.
  src_imageG = cvCreateImage(cvGetSize(frame), IPL_DEPTH_8U, 3);//create image for color (8 bits, 3 channels)
  dst_imageG = cvClone(src_imageG);                       //create clone of source image
  return capture;
}

void pari_PerformImageAcquisition(CvCapture *capt)
{
  static IplImage *frame;
  frame=cvQueryFrame(capt);               //Update frame pointer.
  cvCopy(frame, src_imageG, NULL);        //copy frame as it is (preserve color)
  cvCopy(src_imageG, dst_imageG, NULL);   //copy src into dst and ready to process (admitt similar image structure)
}

