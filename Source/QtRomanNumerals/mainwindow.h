#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "roman.h"

#include <QMainWindow>
#include <QLabel>
#include <QPlainTextEdit>
#include <QVBoxLayout>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void UpdateOutput();

private:

    void SetupUI();

    QLabel* OutputLabel;
    QPlainTextEdit* Input;
    QVBoxLayout* Layout;
    QWidget* CentralWidget;

    Roman* RomanNumberConverter;
};

#endif // MAINWINDOW_H
