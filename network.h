#ifndef NETWORK_H
#define NETWORK_H

#include <QDialog>

namespace Ui {
class Network;
}

class Network : public QDialog
{
    Q_OBJECT
    
public:
    explicit Network(QWidget *parent = 0);
    ~Network();
    
private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_2_clicked();

    void on_background1_linkActivated(const QString &link);

    void on_pushButton_9_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::Network *ui;
};

#endif // NETWORK_H
