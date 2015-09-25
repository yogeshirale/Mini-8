#include "f_fileman.h"
#include "ui_f_fileman.h"

f_fileman::f_fileman(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::f_fileman)
{
    ui->setupUi(this);
    QString sPath="/";
    dirmodel =new QFileSystemModel(this);
    dirmodel->setFilter(QDir::NoDotAndDotDot | QDir::AllDirs);
    dirmodel->setRootPath(sPath);

    ui->treeView->setModel(dirmodel);

    filemodel =new QFileSystemModel(this);
    filemodel->setFilter(QDir::NoDotAndDotDot | QDir::Files);
    filemodel->setRootPath(sPath);

    ui->listView->setModel(filemodel);

}

f_fileman::~f_fileman()
{
    delete ui;
}

void f_fileman::on_treeView_clicked(const QModelIndex &index)
{
    QString sPath= dirmodel->fileInfo(index).absoluteFilePath();
    ui->listView->setRootIndex(filemodel->setRootPath(sPath));
}

