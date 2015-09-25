#include "setting1.h"
#include "ui_setting1.h"

Setting1::Setting1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Setting1)
{
    ui->setupUi(this);
}

Setting1::~Setting1()
{
    delete ui;
}
