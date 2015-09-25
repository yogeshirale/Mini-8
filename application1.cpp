#include "application1.h"
#include "ui_application1.h"
#include "QDesktopServices"
#include "QUrl"
#include <QProcess>


Application1::Application1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Application1)
{
    ui->setupUi(this);
}

Application1::~Application1()
{
    delete ui;
}

void Application1::on_pushButton_3_clicked()
{
     QObject *parent;
     QString program = "/home/yogesh/Pictures/mini8/application/calculator-build-desktop-Qt_4_8_1_in_PATH__System__Release/calculator";
     QStringList arguments;
     arguments << "-style" << "motif";

     QProcess *myProcess = new QProcess(parent);
     myProcess->start(program, arguments);

}

void Application1::on_pushButton_12_clicked()
{
    QObject *parent;
    QString program = "/home/yogesh/Pictures/mini8/application/DDA-build-desktop-Qt_4_8_1_in_PATH__System__Release/DDA";
    QStringList arguments;
    arguments << "-style" << "motif";

    QProcess *myProcess = new QProcess(parent);
    myProcess->start(program, arguments);
}


void Application1::on_pushButton_23_clicked()
{
    QObject *parent;
    QString program = "/home/yogesh/Course/OOMP/weather _1-build-desktop-Qt_4_8_1_in_PATH__System__Release/weather";
    QStringList arguments;
    arguments << "-style" << "motif";

    QProcess *myProcess = new QProcess(parent);
    myProcess->start(program, arguments);
}


void Application1::on_pushButton_22_clicked()
{
    QObject *parent;
    QString program = "/home/yogesh/Course/OOMP/weather/Book-build-desktop-Qt_4_8_1_in_PATH__System__Release/Book";
    QStringList arguments;
    arguments << "-style" << "motif";

    QProcess *myProcess = new QProcess(parent);
    myProcess->start(program, arguments);
}

void Application1::on_pushButton_21_clicked()
{
    QObject *parent;
    QString program = "/home/yogesh/Course/OOMP/Complex-build-desktop-Qt_4_8_1_in_PATH__System__Release/Complex";
    QStringList arguments;
    arguments << "-style" << "motif";

    QProcess *myProcess = new QProcess(parent);
    myProcess->start(program, arguments);
}

void Application1::on_pushButton_20_clicked()
{
    QObject *parent;
    QString program = "/home/yogesh/Course/OOMP/String-build-desktop-Qt_4_8_1_in_PATH__System__Release/String";
    QStringList arguments;
    arguments << "-style" << "motif";

    QProcess *myProcess = new QProcess(parent);
    myProcess->start(program, arguments);
}

void Application1::on_pushButton_16_clicked()
{
    QObject *parent;
    QString program = "/home/yogesh/Course/OOMP/Student-build-desktop-Qt_4_8_1_in_PATH__System__Release/Student";
    QStringList arguments;
    arguments << "-style" << "motif";

    QProcess *myProcess = new QProcess(parent);
    myProcess->start(program, arguments);
}
