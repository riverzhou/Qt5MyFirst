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
    connect(ui->checkBox,SIGNAL(clicked(bool)),this,SLOT(mySlots(bool)));
    connect(ui->checkBox_2,SIGNAL(clicked(bool)),this,SLOT(mySlots(bool)));
    connect(ui->checkBox_3,SIGNAL(clicked(bool)),this,SLOT(mySlots(bool)));
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(mySlots(bool)));
}

myfirst::~myfirst()
{
    delete ui;
}


void myfirst::on_checkBox_clicked(bool checked)
{
    printf("on_checkBox_clicked(%d)\n", checked);
}

void myfirst::on_checkBox_2_clicked(bool checked)
{
    printf("on_checkBox_2_clicked(%d)\n", checked);
}

void myfirst::on_checkBox_3_clicked(bool checked)
{
    printf("on_checkBox_3_clicked(%d)\n", checked);
}

void myfirst::on_checkBox_3_clicked(void)
{
    printf("on_checkBox_3_clicked(void)\n");
}

void myfirst::mySlots(void)
{
    printf("mySlots(void)\n");
    if (ui->checkBox->isChecked())
        printf("checkBox   is Checked\n");
    if (ui->checkBox_2->isChecked())
        printf("checkBox_2 is Checked\n");
    if (ui->checkBox_3->isChecked())
        printf("checkBox_3 is Checked\n");
}

void myfirst::mySlots(bool checked)
{
    printf("mySlots(%d)\n", checked);
    if (ui->checkBox->isChecked())
        printf("checkBox   is Checked\n");
    if (ui->checkBox_2->isChecked())
        printf("checkBox_2 is Checked\n");
    if (ui->checkBox_3->isChecked())
        printf("checkBox_3 is Checked\n");
}
