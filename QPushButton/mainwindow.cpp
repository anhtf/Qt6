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

void MainWindow::on_btn_Click_me_1_clicked()
{
    qDebug() << "User clicked on me. Button 1";
}


void MainWindow::on_btn_Click_me_2_clicked()
{
    qDebug() << "User clicked on me. Button 2";
}

void MainWindow::on_btn_Click_me_3_clicked()
{
    qDebug() << "User clicked on me. Button 3";
}



