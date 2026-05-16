#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->demoButton1->setParent(ui->groupBox_Items_3);
    ui->demoButton2->setParent(ui->groupBox_Items_3);

    ui->demoButton1->setGeometry(0, 0, 150, 50);
    ui->demoButton2->setGeometry(0, 60, 150, 50);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_demoButton1_clicked()
{
    ui->groupBox_Items_1->setVisible(false);
    ui->groupBox_Items_2->setVisible(true);
}


void MainWindow::on_demoButton2_clicked()
{
    ui->groupBox_Items_2->setVisible(false);
     ui->groupBox_Items_1->setVisible(true);
}

