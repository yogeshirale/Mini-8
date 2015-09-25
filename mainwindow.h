#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include <QMainWindow>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_4_clicked();

    void on_network_clicked();

    void on_setting_clicked();

    void on_filemanager_clicked();

    void on_application_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
