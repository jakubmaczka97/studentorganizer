#include "addcaldialog.h"
//#include "ui_addcaldialog.h"

addcaldialog::addcaldialog(QWidget *parent) :
    QDialog(parent)
{
    titleLabel = new QLabel("Tytuł Notatki: ");
    titleEdit = new QLineEdit();
    contentLabel = new QLabel("Treść Notatki: ");
    contentEdit = new QLineEdit();
    priorityLabel = new QLabel("Priorytet Notatki");
    priorityEdit = new QLineEdit();
    dateLabel = new QLabel("Data: ");
    dateEdit = new QDateEdit();
    timeLabel = new QLabel("Godzina: ");
    timeEdit = new QTimeEdit();
    addButton = new QPushButton("Dodaj");
    clearButton = new QPushButton("Wyczyść");
    layout2 = new QGridLayout;
    layout2->addWidget(titleLabel, 0, 0);
    layout2->addWidget(titleEdit, 0, 1);
    layout2->addWidget(contentLabel, 1, 0);
    layout2->addWidget(contentEdit, 1, 1);
    layout2->addWidget(priorityLabel, 2, 0);
    layout2->addWidget(priorityEdit, 2, 1);
    layout2->addWidget(dateLabel, 3, 0);
    layout2->addWidget(dateEdit, 3, 1);
    layout2->addWidget(timeLabel, 3, 2);
    layout2->addWidget(timeEdit, 3, 3);
    layout2->addWidget(addButton, 4, 0);
    layout2->addWidget(clearButton, 4, 1);
    setLayout(layout2);
    setWindowTitle("Dodaj Wydarzenie");
    //setWindowFlags(Qt::Widget);
    //setAttribute(Qt::WA_DeleteOnClose);
}

addcaldialog::~addcaldialog()
{
    //delete ui;
}
