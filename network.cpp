#include "network.h"
#include "ui_network.h"
#include "QUrl"
#include "QtCore"
#include "QDesktopServices"
Network::Network(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Network)
{
    ui->setupUi(this);
    QPixmap pix("/home/yogesh/Music/8/icon/network/back2.jpg");
    ui->background1->setPixmap(pix);
}

Network::~Network()
{
    delete ui;
}

void Network::on_pushButton_3_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.google.com", QUrl::TolerantMode));
}

void Network::on_pushButton_clicked()
{

}

void Network::on_pushButton_6_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.facebook.com", QUrl::TolerantMode));
}

void Network::on_pushButton_7_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.quora.com", QUrl::TolerantMode));
    hide();
}

void Network::on_pushButton_2_clicked()
{
    QDesktopServices::openUrl(QUrl("https://www.gmail.com", QUrl::TolerantMode));
}

void Network::on_background1_linkActivated(const QString &link)
{
    QDesktopServices::openUrl(QUrl("", QUrl::TolerantMode));
}

void Network::on_pushButton_9_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.flipkart.com", QUrl::TolerantMode));
}

void Network::on_pushButton_4_clicked()
{
    QDesktopServices::openUrl(QUrl("https://chrome.google.com/webstore", QUrl::TolerantMode));
}

void Network::on_pushButton_8_clicked()
{
    QDesktopServices::openUrl(QUrl("http://timesofindia.indiatimes.com/", QUrl::TolerantMode));
    //QDesktopServices::openUrl(QUrl("", QUrl::TolerantMode));
}
