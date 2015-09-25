
#include "mainwindow.h"
#include <QApplication>
//#include "QDesktopWidget"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //QTableView* view = new QTableView;
    //view->setModel(createModel(view));
    w.show();
    //int
    return a.exec();
}
