#ifndef FILEMANAGER1_H
#define FILEMANAGER1_H

#include <QDialog>

namespace Ui {
class filemanager1;
}

class filemanager1 : public QDialog
{
    Q_OBJECT
    
public:
    explicit filemanager1(QWidget *parent = 0);
    ~filemanager1();
    
private:
    Ui::filemanager1 *ui;
};

#endif // FILEMANAGER1_H
