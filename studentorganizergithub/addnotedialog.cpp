#include "addnotedialog.h"
//#include "ui_addnotedialog.h"

addnotedialog::addnotedialog(QWidget *parent) :
    QDialog(parent)
{
    titleLabel = new QLabel("Tytuł Notatki: ");
    titleEdit = new QLineEdit();
    contentLabel = new QLabel("Treść Notatki: ");
    contentEdit = new QLineEdit();
    priorityLabel = new QLabel("Priorytet Notatki");
    priorityEdit = new QLineEdit();
    addButton = new QPushButton("Dodaj");
    clearButton = new QPushButton("Wyczyść");
    layout = new QGridLayout;
    layout->addWidget(titleLabel, 0, 0);
    layout->addWidget(titleEdit, 0, 1);
    layout->addWidget(contentLabel, 1, 0);
    layout->addWidget(contentEdit, 1, 1);
    layout->addWidget(priorityLabel, 2, 0);
    layout->addWidget(priorityEdit, 2, 1);
    layout->addWidget(addButton, 3, 0);
    layout->addWidget(clearButton, 3, 1);
    setLayout(layout);
    setWindowTitle("Dodaj Notatkę");
    //setWindowFlags(Qt::Widget);
    //setAttribute(Qt::WA_DeleteOnClose);
}

addnotedialog::~addnotedialog()
{
    //delete ui;
}
