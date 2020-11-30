#include "myfirst.h"
#include "./ui_myfirst.h"

myfirst::myfirst(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myfirst)
{
    ui->setupUi(this);
}

myfirst::~myfirst()
{
    delete ui;
}


void myfirst::on_checkBox_clicked()
{
    printf("on_checkBox_clicked\n");
}
