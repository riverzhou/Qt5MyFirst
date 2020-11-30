#include "myfirst.h"
#include "./ui_myfirst.h"

myfirst::myfirst(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::myfirst)
{
    ui->setupUi(this);
    connect(ui->checkBox,SIGNAL(clicked()),this,SLOT(mySlots()));
    connect(ui->checkBox_2,SIGNAL(clicked()),this,SLOT(mySlots()));
    connect(ui->checkBox_3,SIGNAL(clicked()),this,SLOT(mySlots()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(mySlots()));
}

myfirst::~myfirst()
{
    delete ui;
}


void myfirst::on_checkBox_clicked(bool checked)
{
    printf("on_checkBox_clicked %d\n", checked);
}

void myfirst::on_checkBox_2_clicked(bool checked)
{
    printf("on_checkBox_2_clicked %d\n", checked);
}

void myfirst::on_checkBox_3_clicked(bool checked)
{
    printf("on_checkBox_3_clicked %d\n", checked);
}

void myfirst::mySlots()
{
    if (ui->checkBox->isChecked())
        printf("checkBox is Checked\n");
    if (ui->checkBox_2->isChecked())
        printf("checkBox_2 is Checked\n");
    if (ui->checkBox_3->isChecked())
        printf("checkBox_3 is Checked\n");
}
