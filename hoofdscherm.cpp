#include "hoofdscherm.h"
#include "ui_hoofdscherm.h"
#include <QKeyEvent>

hoofdscherm::hoofdscherm(QDialog *parent) :
  QDialog(parent),
  ui(new Ui::hoofdscherm)
{
  ui->setupUi(this);
}

hoofdscherm::~hoofdscherm()
{
  delete ui;
}

void hoofdscherm::keyPressEvent(QKeyEvent * e)
{
  //Reageer op de toetsen:
  //Omhoog
    if (e->key() == Qt::Key_Up)
    {
      ui->speler_1->setGeometry(ui->speler_1->geometry().adjusted(0, 0, 0, -10));
  }
  //Rechts
    if (e->key() == Qt::Key_Right)
    {
      ui->speler_1->setGeometry(ui->speler_1->geometry().adjusted(0, 0, -10, 0));
  }
  //Omlaag

  //Links
  if (e->key() == Qt::Key_Left)
  {
    ui->speler_1->setGeometry(ui->speler_1->geometry().adjusted(-10, 0, 0, 0));
  }
}
