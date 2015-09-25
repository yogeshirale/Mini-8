#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "network.h"
#include "filemanager1.h"
#include "setting1.h"
#include "application1.h"
#include "f_fileman.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("/home/yogesh/Music/8/icon/Untitled Folder/T-background.jpg");
   // ui->background->setPixmap(pix);

    ui->application->setFixedHeight(191);// making the push button round in mainwindow
    ui->application->setFixedWidth(191);
    QRect *rect1 = new QRect(0,0,191,191);
    QRegion* region1 = new QRegion(*rect1,QRegion::Ellipse);
    ui->application->setMask(*region1);

    ui->network->setFixedHeight(191); // making the push button round
    ui->network->setFixedWidth(191);
    QRect *rect2 = new QRect(0,0,191,191);
    QRegion* region2 = new QRegion(*rect2,QRegion::Ellipse);
    ui->network->setMask(*region2);

    ui->setting->setFixedHeight(191); // making the push button round
    ui->setting->setFixedWidth(191);
    QRect *rect3 = new QRect(0,0,191,191);
    QRegion* region3 = new QRegion(*rect3,QRegion::Ellipse);
    ui->setting->setMask(*region3);

    ui->filemanager->setFixedHeight(191); // making the push button round
    ui->filemanager->setFixedWidth(191);
    QRect *rect4 = new QRect(0,0,191,191);
    QRegion* region4 = new QRegion(*rect4,QRegion::Ellipse);
    ui->filemanager->setMask(*region4);

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_network_clicked()
{
    Network ob1;
    ob1.setModal(true);
    ob1.exec();
}

void MainWindow::on_setting_clicked()
{
    Setting1 ob1;
    ob1.setModal(true);
    ob1.exec();
}

void MainWindow::on_filemanager_clicked()
{
    f_fileman ob1;
    ob1.setModal(true);
    ob1.exec();
}

void MainWindow::on_application_clicked()
{
    Application1 ob1;
    ob1.setModal(true);
    ob1.exec();
}
