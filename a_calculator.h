#ifndef A_CALCULATOR_H
#define A_CALCULATOR_H

#include <QDialog>

namespace Ui {
class a_calculator;
}

class a_calculator : public QDialog
{
    Q_OBJECT
    
public:
    explicit a_calculator(QWidget *parent = 0);
    ~a_calculator();
    
private slots:
    void on_pushButton_6_clicked();

    void on_add_clicked();

private:
    Ui::a_calculator *ui;
};

#endif // A_CALCULATOR_H
