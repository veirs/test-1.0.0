#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdlib.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(pushButton()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void f(void)
{
    int* x = (int *)malloc(10 * sizeof(int));
    x[10] = 0;
    // problem 1: heap block overrun
}

void MainWindow::pushButton(){
    f();
}
