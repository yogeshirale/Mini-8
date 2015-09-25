#ifndef APPLICATION1_H
#define APPLICATION1_H

#include <QDialog>

namespace Ui {
class Application1;
}

class Application1 : public QDialog
{
    Q_OBJECT
    
public:
    explicit Application1(QWidget *parent = 0);
    ~Application1();
    
private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_16_clicked();

private:
    Ui::Application1 *ui;
};

#endif // APPLICATION1_H
