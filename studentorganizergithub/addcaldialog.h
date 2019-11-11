#ifndef ADDCALDIALOG_H
#define ADDCALDIALOG_H

#include <QDialog>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QWidget>
#include <QPushButton>
#include <QDateEdit>
#include <QTimeEdit>
#include <QGridLayout>

//namespace Ui {
//class addcaldialog;
//}

class addcaldialog : public QDialog
{
    Q_OBJECT

public:
   explicit addcaldialog(QWidget *parent = nullptr);
   ~addcaldialog();

private:
    QWidget *dialog2;
    QGridLayout *layout2;
    QLabel *titleLabel;
    QLabel *contentLabel;
    QLabel *priorityLabel;
    QLabel *dateLabel;
    QLabel *timeLabel;
    QLineEdit *titleEdit;
    QLineEdit *contentEdit;
    QLineEdit *priorityEdit;
    QDateEdit *dateEdit;
    QTimeEdit *timeEdit;
    QPushButton *addButton;
    QPushButton *clearButton;
};

#endif // ADDCALDIALOG_H
