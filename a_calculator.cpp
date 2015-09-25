#include "a_calculator.h"
#include "ui_a_calculator.h"

a_calculator::a_calculator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::a_calculator)
{
    ui->setupUi(this);
}

a_calculator::~a_calculator()
{
    delete ui;
}


void a_calculator::on_add_clicked()
{
    int x=ui->lineEdit->text().toInt();
}
