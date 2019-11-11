#include "addcashdialog.h"
//#include "ui_addcashdialog.h"

addcashdialog::addcashdialog(QWidget *parent) :
    QDialog(parent)
{
    titleLabel = new QLabel("Tytuł Notatki: ");
    titleEdit = new QLineEdit();
    dateLabel = new QLabel("Data: ");
    dateEdit = new QDateEdit();
    priceLabel = new QLabel("Kwota: ");
    priceEdit = new QLineEdit();
    addButton = new QPushButton("Dodaj");
    clearButton = new QPushButton("Wyczyść");
    layout3 = new QGridLayout;
    layout3->addWidget(titleLabel, 0, 0);
    layout3->addWidget(titleEdit, 0, 1);
    layout3->addWidget(dateLabel, 1, 0);
    layout3->addWidget(dateEdit, 1, 1);
    layout3->addWidget(priceLabel, 2, 0);
    layout3->addWidget(priceEdit, 2, 1);
    layout3->addWidget(addButton, 3, 0);
    layout3->addWidget(clearButton, 3, 1);
    setLayout(layout3);
    setWindowTitle("Dodaj Wpis Do Budżetu");
}

addcashdialog::~addcashdialog()
{
    //delete ui;
}
