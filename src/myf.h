#ifndef _MYF_H
#define _MYF_H

//...

#include <gtk/gtk.h>
#include <cv.h>
#include <highgui.h>

//...

/* prototypes should be within the last lines of header */
//#include "prototypes.h"
CvCapture *pari_StartImageAcquisition();
void pari_PerformImageAcquisition(CvCapture *capt);
gboolean pari_UpdateImageAreas(gpointer data);
GdkPixbuf *pari_ConvertOpenCv2Gtk(IplImage * image, int dst_w, int dst_h);
void pari_RefreshDrawingArea( char * widgetName, IplImage *img);
     //pari_RefreshDrawingArea
gboolean on_drawingarea1_expose_event(GtkWidget * widget, GdkEvent * event, gpointer user_data);
void pari_ProcessUserOperations(IplImage *src, IplImage *dst);



#if defined (_MAIN_C_)
GtkBuilder *builderG;
IplImage *dst_imageG , *src_imageG;
CvCapture *captureG;
#else
extern GtkBuilder *builderG;
extern IplImage *dst_imageG , *src_imageG;
extern CvCapture *captureG;
#endif

#endif /* _MYF_H */
