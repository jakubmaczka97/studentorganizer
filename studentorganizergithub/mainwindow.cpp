//Created by Jakub Mączka 2019
//Copyright Jakub Mączka 2019

#include "mainwindow.h"
#include "addnotedialog.h"
#include "addcaldialog.h"
#include "addcashdialog.h"

MainWindow::MainWindow()
{
    setWindowTitle("Student Organizer GitHub");
    //setFixedSize(400, 720);

    mainWidget = new QWidget();
    centralWidgetLayout = new QVBoxLayout();
    /*QFrame* line = new QFrame();
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);*/
    //Sekcja Notatki
    noteLayout = new QGridLayout();
    noteLabel = new QLabel ("Ostatnie Notatki");
    noteLayout->addWidget(noteLabel,0,0,Qt::AlignCenter);
    //noteLayout->addWidget(line,1,0);
    centralWidgetLayout->addLayout(noteLayout);
    //Przyciski Notatek
    noteButtons = new QHBoxLayout();
    addNoteButton = new QPushButton("Dodaj");
    seeNoteButton = new QPushButton("Wyświetl");
    noteButtons->addStretch();
    noteButtons->addWidget(addNoteButton);
    noteButtons->addWidget(seeNoteButton);
    centralWidgetLayout->addLayout(noteButtons);
    //Slots Signals Notatki
    QObject::connect(addNoteButton, SIGNAL(clicked()), this, SLOT(on_addNoteButton_clicked()));

    //Sekcja Kalendarz
    calLayout = new QGridLayout();
    calLabel = new QLabel ("Dzisiejsze Wydarzenia");
    calLayout->addWidget(calLabel,0,0,Qt::AlignCenter);
    //calLayout->addWidget(line,1,0);
    centralWidgetLayout->addLayout(calLayout);
    //Przyciski Kalendarz
    calButtons = new QHBoxLayout();
    addCalButton = new QPushButton("Dodaj");
    seeCalButton = new QPushButton("Wyświetl");
    calButtons->addStretch();
    calButtons->addWidget(addCalButton);
    calButtons->addWidget(seeCalButton);
    centralWidgetLayout->addLayout(calButtons);
    //Slots Signals Kalendarz
    QObject::connect(addCalButton, SIGNAL(clicked()), this, SLOT(on_addCalButton_clicked()));

    //Sekcja Budżet
    cashLayout = new QGridLayout();
    cashLabel = new QLabel ("Studencki Budżet");
    cashLayout->addWidget(cashLabel,0,0,Qt::AlignCenter);
    centralWidgetLayout->addLayout(cashLayout);
    //Przyciski Budżet
    cashButtons = new QHBoxLayout();
    addCashButton = new QPushButton("Dodaj");
    seeCashButton = new QPushButton("Wyświetl");
    cashButtons->addStretch();
    cashButtons->addWidget(addCashButton);
    cashButtons->addWidget(seeCashButton);
    centralWidgetLayout->addLayout(cashButtons);
    //Slots Signals Kalendarz
    QObject::connect(addCashButton, SIGNAL(clicked()), this, SLOT(on_addCashButton_clicked()));

    mainWidget->setLayout(centralWidgetLayout);
    setCentralWidget(mainWidget);
}
 void MainWindow::on_addNoteButton_clicked()
 {
    addnotedialog dialog;
     dialog.setModal(true);
     dialog.exec();
 }

 void MainWindow::on_addCalButton_clicked()
 {
     addcaldialog dialog2;
     dialog2.setModal(true);
     dialog2.exec();
 }

 void MainWindow::on_addCashButton_clicked()
 {
     addcashdialog dialog3;
     dialog3.setModal(true);
     dialog3.exec();
 }

/*void MainWindow::createLine() {
    QFrame* line = new QFrame();
    line->setFrameShape(QFrame::HLine);
    line->setFrameShadow(QFrame::Sunken);
    noteLayout->addWidget(line,1,0);
    calLayout->addWidget(line,1,0);
    cashLayout->addWidget(line,1,0);
}*/
