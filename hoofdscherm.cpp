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
  if (e->key() == Qt::Key_Left)
  {
    ui->speler_1->setGeometry(ui->speler_1->geometry().adjusted(-10, 0, 0, 0));
  }
}
