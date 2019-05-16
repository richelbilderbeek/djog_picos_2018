#ifndef HOOFDSCHERM_H
#define HOOFDSCHERM_H

#include <QDialog>

namespace Ui {
  class hoofdscherm;
}

class hoofdscherm : public QDialog
{
  Q_OBJECT

public:
  explicit hoofdscherm(QDialog *parent = 0);
  ~hoofdscherm();

protected:

  void keyPressEvent(QKeyEvent *);

private:
  Ui::hoofdscherm *ui;
};

#endif // HOOFDSCHERM_H
