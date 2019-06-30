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
    ui->speler_1->move(
      ui->speler_1->x(),
      ui->speler_1->y() - 10
    );
  }
  //Rechts
  if (e->key() == Qt::Key_Right)
  {
    ui->speler_1->move(
      ui->speler_1->x() + 10,
      ui->speler_1->y()
      );
  }
  //Omlaag
  if (e->key() == Qt::Key_Down)
  {
    ui->speler_1->move(
      ui->speler_1->x(),
      ui->speler_1->y() + 10
      );
  }
  //Links
  if (e->key() == Qt::Key_Left)
  {
    ui->speler_1->move(
      ui->speler_1->x() - 10,
      ui->speler_1->y()
  );
  }
}
