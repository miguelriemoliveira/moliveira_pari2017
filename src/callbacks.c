#include "myf.h"

gboolean pari_UpdateImageAreas(gpointer data)
{
  //generate an expose event (draw event) on drawingarea1
  GtkWidget *da1 = GTK_WIDGET(gtk_builder_get_object(builderG, "drawingarea1"));
  gtk_widget_queue_draw(da1);
  return TRUE;
}

