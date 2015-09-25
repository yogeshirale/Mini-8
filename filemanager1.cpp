#include "filemanager1.h"
#include "ui_filemanager1.h"

filemanager1::filemanager1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::filemanager1)
{
    ui->setupUi(this);
}

filemanager1::~filemanager1()
{
    delete ui;
}
