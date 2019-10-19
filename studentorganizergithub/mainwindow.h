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

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow();
private slots:
    void saveButtonClicked();
private:
    // Widgets
    QWidget *mainWidget;
    QVBoxLayout *centralWidgetLayout;
    QGridLayout *formLayout;
    QHBoxLayout *buttonsLayout;
    QLabel *noteLabel;
    QLabel *dateOfNoteLabel;
    QLabel *priorityOfNoteLabel;
    QPushButton *savePushButton;
    QPushButton *newPushButton;
    QLineEdit *noteLineEdit;
    QDateEdit *dateOfNoteEdit;
    QLineEdit *priorityOfNoteLineEdit;
    QTableView *appTable;
    QStandardItemModel *model;
    // Menus
    QMenu *appMenu;
    QMenu *addMenu;
    QMenu *helpMenu;
    // Actions
    QAction *quitAction;
    QAction *aboutAction;
    QAction *saveAction;
    QAction *cancelAction;
    QAction *openAction;
    QAction *newAction;
    QAction *aboutQtAction;
    QAction *newToolBarAction;
    QAction *openToolBarAction;
    QAction *closeToolBarAction;
    QAction *clearToolBarAction;
    // Toolbar
    QToolBar *toolbar;
    // Icons
    QPixmap newIcon;
    QPixmap openIcon;
    QPixmap closeIcon;
    QPixmap clearIcon;
    // init methods
    void clearFields();
    void createIcons();
    void createMenuBar();
    void createToolBar();
    void setupSignalsAndSlot();
    void setupCoreWidgets();
};
#endif
