#include "mainwindow.h"
#include "mainwindow.h"
MainWindow::MainWindow()
{
    setWindowTitle("Student Organizer GitHub");
    setFixedSize(500, 500);
    createIcons();
    setupCoreWidgets();
    createMenuBar();
    createToolBar();
    centralWidgetLayout->addLayout(formLayout);
    centralWidgetLayout->addWidget(appTable);
    centralWidgetLayout->addLayout(buttonsLayout);
    mainWidget->setLayout(centralWidgetLayout);
    setCentralWidget(mainWidget);
    setupSignalsAndSlot();
}

void MainWindow::createIcons() {
    newIcon = QPixmap("new.png");
    openIcon = QPixmap("open.png");
    closeIcon = QPixmap("close.png");
    clearIcon = QPixmap("clear.png");
}

void MainWindow::setupCoreWidgets() {
    mainWidget = new QWidget();
    centralWidgetLayout = new QVBoxLayout();
    formLayout = new QGridLayout();
    buttonsLayout = new QHBoxLayout();
    noteLabel = new QLabel("Treść notatki:");
    dateOfNoteLabel = new QLabel("Data notatki:");
    priorityOfNoteLabel = new QLabel("Priorytet:");
    savePushButton = new QPushButton("Zapisz");
    newPushButton = new QPushButton("Wyczyść");
    noteLineEdit = new QLineEdit();
    dateOfNoteEdit = new QDateEdit(QDate::currentDate());
    priorityOfNoteLineEdit = new QLineEdit();
    // TableView
    appTable = new QTableView();
    model = new QStandardItemModel(1, 3, this);
    appTable->setContextMenuPolicy(Qt::CustomContextMenu);
    appTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("Notatka")));
    model->setHorizontalHeaderItem(1, new QStandardItem(QString("Data")));
    model->setHorizontalHeaderItem(2, new QStandardItem(QString("Priorytet")));
    appTable->setModel(model);

    QStandardItem *firstItem = new QStandardItem(QString("Testowa notatka"));
    QDate dateOfNote(2000, 1, 1);
    QStandardItem *secondItem = new QStandardItem(dateOfNote.toString());
    QStandardItem *thirdItem = new QStandardItem(QString("Testowa"));
    model->setItem(0, 0, firstItem);
    model->setItem(0, 1, secondItem);
    model->setItem(0, 2, thirdItem);
    formLayout->addWidget(noteLabel, 0, 0);
    formLayout->addWidget(noteLineEdit, 0, 1);
    formLayout->addWidget(dateOfNoteLabel, 1, 0);
    formLayout->addWidget(dateOfNoteEdit, 1, 1);
    formLayout->addWidget(priorityOfNoteLabel, 2 ,0);
    formLayout->addWidget(priorityOfNoteLineEdit, 2, 1);
    buttonsLayout->addStretch();
    buttonsLayout->addWidget(savePushButton);
    buttonsLayout->addWidget(newPushButton);
}

void MainWindow::createMenuBar() {
    // Setup File Menu
    appMenu = menuBar()->addMenu("&File");
    quitAction = new QAction(closeIcon, "Wyjście", this);
    newAction = new QAction(newIcon, "&New", this);
    openAction = new QAction(openIcon, "&New", this);
    appMenu->addAction(newAction);
    appMenu->addAction(openAction);
    appMenu->addSeparator();
    appMenu->addAction(quitAction);
    helpMenu = menuBar()->addMenu("Help");
    aboutAction = new QAction("About", this);
    helpMenu->addAction(aboutAction);
}

void MainWindow::createToolBar() {
    // Setup Tool bar menu
    toolbar = addToolBar("main toolbar");
    toolbar->setMovable(false);
    newToolBarAction = toolbar->addAction(QIcon(newIcon), "New File");
    openToolBarAction = toolbar->addAction(QIcon(openIcon), "Open Icon");
    toolbar->addSeparator();
    clearToolBarAction = toolbar->addAction(QIcon(clearIcon), "Clear All");
    closeToolBarAction = toolbar->addAction(QIcon(closeIcon), "Quit Application");
}

void MainWindow::setupSignalsAndSlot() {
    // Setup Signals And Slots
    connect(quitAction, &QAction::triggered, this, &QApplication::quit);
    connect(closeToolBarAction, &QAction::triggered, this, &QApplication::quit);
    connect(savePushButton, SIGNAL(clicked()), this, SLOT(saveButtonClicked()));
}

void MainWindow::saveButtonClicked()
{
    QStandardItem *note = new QStandardItem(noteLineEdit->text());
    QStandardItem *don = new QStandardItem(dateOfNoteEdit->date().toString());
    QStandardItem *priority = new QStandardItem(priorityOfNoteLineEdit->text());
    model->appendRow({note, don, priority});
    clearFields();
}

void MainWindow::clearFields()
{
    noteLineEdit->clear();
    priorityOfNoteLineEdit->setText("");
    QDate dateOfNote(2000, 1, 1);
    dateOfNoteEdit->setDate(dateOfNote);
}
