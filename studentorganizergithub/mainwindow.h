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
#include "addnotedialog.h"
#include "addcaldialog.h"


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();
private slots:
    void on_addNoteButton_clicked();
    void on_addCalButton_clicked();
    void on_addCashButton_clicked();

private:
    addnotedialog *dialog;
    addcaldialog *dialog2;
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
    //Metody
    void createLine();
    void createMenu();

};
#endif
