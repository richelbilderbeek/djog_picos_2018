#include "hoofdscherm.h"
#include <QApplication>
#include <iostream>

void test()
{
  //Nog geen tests
}

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  #ifndef NDEBUG
  test();
  #else
  assert(1 == 2); //Release mode, alle asserts zijn dan weg
  #endif

  hoofdscherm w;
  w.show();

  return a.exec();
}
