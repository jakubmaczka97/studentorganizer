#ifndef ADDCASHDIALOG_H
#define ADDCASHDIALOG_H

#include <QDialog>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QWidget>
#include <QPushButton>
#include <QDateEdit>
#include <QTimeEdit>
#include <QGridLayout>

class addcashdialog : public QDialog
{
    Q_OBJECT

public:
    explicit addcashdialog(QWidget *parent = nullptr);
    ~addcashdialog();

private:
        QWidget *dialog3;
        QGridLayout *layout3;
        QLabel *titleLabel;
        QLabel *priceLabel;
        QLabel *dateLabel;
        QLineEdit *titleEdit;
        QDateEdit *dateEdit;
        QLineEdit *priceEdit;
        QPushButton *addButton;
        QPushButton *clearButton;
};

#endif // ADDCASHDIALOG_H
