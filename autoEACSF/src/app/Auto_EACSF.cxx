// A simple program that computes the square root of a number
#include <stdio.h>
#include <stdlib.h>
#include "csfwindow.h"
#include <QApplication>
 
int main (int argc, char *argv[])
{

  QApplication app( argc , argv );


  CSFWindow csfw;
  csfw.show();

  return app.exec();
  
  }
