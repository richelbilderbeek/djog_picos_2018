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
<<<<<<< HEAD
      ui->speler_1->setGeometry(ui->speler_1->geometry().adjusted(0, 0, 0, -10));
  }
  //Rechts
    if (e->key() == Qt::Key_Right)
    {
      ui->speler_1->setGeometry(ui->speler_1->geometry().adjusted(0, 0, -10, 0));
  }
=======
      ui->speler_1->setGeometry(ui->speler_1->geometry().adjusted(0,-10, 0, 0));
    }
  //Rechts
  if (e->key() == Qt::Key_Right)
  {
    ui->speler_1->setGeometry(ui->speler_1->geometry().adjusted(10, 0, 0, 0));
  }

>>>>>>> b624f5a2132283e49b79224016908b3762f5d1d1
  //Omlaag
  if (e->key() == Qt::Key_Down)
  {
    ui->speler_1->setGeometry(ui->speler_1->geometry().adjusted(0,10, 0, 0));
  }

  //Links
  if (e->key() == Qt::Key_Left)
  {
    ui->speler_1->setGeometry(ui->speler_1->geometry().adjusted(-10, 0, 0, 0));
  }
}
