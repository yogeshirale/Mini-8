#ifndef SETTING1_H
#define SETTING1_H

#include <QDialog>

namespace Ui {
class Setting1;
}

class Setting1 : public QDialog
{
    Q_OBJECT
    
public:
    explicit Setting1(QWidget *parent = 0);
    ~Setting1();
    
private:
    Ui::Setting1 *ui;
};

#endif // SETTING1_H
