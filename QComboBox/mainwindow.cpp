#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QDebug"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    for (int i = 0; i < 10; i++)
    {
        ui->comboBox_2->addItem("Item " + QString::number(i));
    }
     ui->comboBox_2->setCurrentIndex(-1);

    connect(ui->comboBox_2, SIGNAL(currentIndexChanged(int)), this, SLOT(Custom_Slot_ComboBox_2(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_comboBox_1_currentIndexChanged(int index)
{
    qDebug() << "Select index " << index;
}


void MainWindow::on_comboBox_1_currentTextChanged(const QString &arg1)
{
    qDebug() << "Select text " << arg1;
}



void MainWindow::on_pushButton_clicked()
{
    ui->comboBox_1->setCurrentIndex(3);
}

void MainWindow::Custom_Slot_ComboBox_2(int index)
{
    qDebug() << "Combo box 2 selected: " << index;
}

