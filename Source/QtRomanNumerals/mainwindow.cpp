#include "mainwindow.h"
#include "roman.h"
    #include <QRegExp>
    #include <QDebug>

const int ROMAN_MAX = 3888;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    RomanNumberConverter = new Roman();

    SetupUI();
    show();
}

MainWindow::~MainWindow()
{
    delete OutputLabel;
    delete Input;
    delete Layout;

    delete RomanNumberConverter;
}

void MainWindow::UpdateOutput()
{
    QString text = Input->toPlainText();
    QRegExp re("\\d*");
    if(re.exactMatch(text))
    {
        int number = text.toInt();
        if(number > 0 && number <= ROMAN_MAX)
        {
            OutputLabel->setText(RomanNumberConverter->ConvertToRoman(number).c_str());
        }
        else
        {
            OutputLabel->setText("Enter a valid number. 3888 is MAX");
        }
    }
    else
    {
            OutputLabel->setText("Enter a number.");
    }
}

void MainWindow::SetupUI()
{


    CentralWidget = new QWidget() ;
    setCentralWidget(CentralWidget);

    OutputLabel = new QLabel(CentralWidget);
    OutputLabel->setText("Hello there");
    Input = new QPlainTextEdit(CentralWidget);
    Layout = new QVBoxLayout(CentralWidget);
    Layout->addWidget(OutputLabel);
    Layout->addWidget(Input);
    CentralWidget->setLayout(Layout);

    connect(Input, SIGNAL(textChanged()), this, SLOT(UpdateOutput()));
}
