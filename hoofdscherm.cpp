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
  // Als de speler aan de bovenkant het scherm uitgaat ...
  if (ui->speler_1->y() < 0)
  {
    // ... dan moet 'ie iets omlaag worden gezet
    ui->speler_1->move(
       ui->speler_1->x(),
       ui->speler_1->y() + 10
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
  if (ui->speler_1->x() + 55 > this->width())
  {
    ui->speler_1->move(
      ui->speler_1->x() - 10,
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
  if (ui->speler_1->y() + 55 > this->height())
    {
      //Als poppetje1 zijn y-cordinaten groter zijn de de hoogte,
      //dan moet 'ie weer omhoog worden gezet
      ui->speler_1->move(
        ui->speler_1->x(),
        ui->speler_1->y() - 10
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
  if (ui->speler_1->x() < 0)
  {
    ui->speler_1->move(
      ui->speler_1->x() + 10,
      ui->speler_1->y()
    );
 }
}
