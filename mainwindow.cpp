#include "mainwindow.h"
#include "ui_mainwindow.h"

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


void MainWindow::on_horizontalSlider_valueChanged(int value)
{
    ui->label->setText(QString("%1").arg(value, 2, 10, QChar('0')));

}


void MainWindow::on_pushButton_clicked()
{
    int i = ui->horizontalSlider->sliderPosition();
    ui->horizontalSlider->setSliderPosition(i + 1);
}


void MainWindow::on_pushButton_2_clicked()
{
    int i = ui->horizontalSlider->sliderPosition();
    ui->horizontalSlider->setSliderPosition(i - 1);
}

