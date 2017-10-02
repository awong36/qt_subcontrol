#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setProperty("pagematches", true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
// Set all buttons to false
ui->pushButton->setProperty("pagematches", false);
ui->pushButton_2->setProperty("pagematches", false);
ui->pushButton_3->setProperty("pagematches", false);
// Set one of the buttons to true
if (index == 0)
ui->pushButton->setProperty("pagematches", true);
else if (index == 1)
ui->pushButton_2->setProperty("pagematches", true);
else
ui->pushButton_3->setProperty("pagematches", true);
// Update buttons style
ui->pushButton->style()->polish(ui->pushButton);
ui->pushButton_2->style()->polish(ui->pushButton_2);
ui->pushButton_3->style()->polish(ui->pushButton_3);
}
