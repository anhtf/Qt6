#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QDebug"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    qDebug() << "Line edit data: " << ui->lineEdit_Test_Data_1->text();
}


void MainWindow::on_lineEdit_Test_Data_1_textChanged(const QString &arg1)
{
    qDebug() << "Current text: " << arg1;
}


void MainWindow::on_pushButton_settext_clicked()
{
    ui->lineEdit_Test_Data_1->setText("Anhtdh");
}

