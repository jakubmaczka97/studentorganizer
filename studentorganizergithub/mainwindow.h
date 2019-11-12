//Created by Jakub Mączka 2019
//Copyright Jakub Mączka 2019

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QApplication>
#include <QLabel>
#include <QLineEdit>
#include <QDate>
#include <QDateEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QGridLayout>
#include <QPushButton>
#include <QMessageBox>
#include <QAction>
#include <QMenuBar>
#include <QMenu>
#include <QtGui>
#include <Qt>
#include <QToolBar>
#include <QTableView>
#include <QHeaderView>
#include <QTabWidget>
#include <QFrame>
#include <QtSql>
#include <QDebug>
#include "addnotedialog.h"
#include "addcaldialog.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    QSqlDatabase sogithub;
    void connClose()
    {
        sogithub.close();
        sogithub.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen()
    {
        QSqlDatabase sogithub=QSqlDatabase::addDatabase("QSQLITE");
        sogithub.setDatabaseName("C:/sqlite/sogithub.db");
        if(!sogithub.open()){
            qDebug()<<("Coś poszło nie tak :(");
            return false;
        }
        else{
            qDebug()<<("Wszystko działa");
            return true;
        }
    }

public:
    MainWindow();
private slots:
    void on_addNoteButton_clicked();
    void on_addCalButton_clicked();
    void on_addCashButton_clicked();
    void on_seeNoteButton_clicked();
    void on_seeCalButton_clicked();

private:
    //addnotedialog *dialog;
    //addcaldialog *dialog2;
    //Main Window
    QWidget *mainWidget;
    QVBoxLayout *centralWidgetLayout;
    QFrame *line;
    //Sekcja Notatki
    QGridLayout *noteLayout;
    QLabel *noteLabel;
    QHBoxLayout *noteButtons;
    QPushButton *addNoteButton;
    QPushButton *seeNoteButton;
    QPushButton *delNoteButton;
    //Sekcja Kalendarz
    QGridLayout *calLayout;
    QLabel *calLabel;
    QHBoxLayout *calButtons;
    QPushButton *addCalButton;
    QPushButton *seeCalButton;
    QPushButton *delCalButton;
    //Sekcja Budżet
    QGridLayout *cashLayout;
    QLabel *cashLabel;
    QHBoxLayout *cashButtons;
    QPushButton *addCashButton;
    QPushButton *seeCashButton;
    QPushButton *delCashButton;

    QLabel *sqlLabel;
    //Metody
    void createLine();
    void createMenu();

};
#endif
