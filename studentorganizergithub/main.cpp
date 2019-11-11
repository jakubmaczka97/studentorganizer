//Created by Jakub Mączka 2019
//Copyright Jakub Mączka 2019

#include "mainwindow.h"

#include <QApplication>
#include <QtSql>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QCoreApplication::setAttribute(Qt::AA_DontUseNativeMenuBar);
    MainWindow mainwindow;
    mainwindow.show();

    QSqlDatabase db_conn =
       QSqlDatabase::addDatabase("QMYSQL");
       db_conn.setHostName("145.239.23.250");
       db_conn.setDatabaseName("sogithub");
       db_conn.setUserName("root");
       db_conn.setPassword("jmaczka97");
       db_conn.setPort(3306);
       // Error checks
       if (!db_conn.open()) {
           qDebug() << db_conn.lastError();
           return 1;
       } else {
           qDebug() << "Database connection established !";
       }

    return app.exec();
}

