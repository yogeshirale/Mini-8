#ifndef F_FILEMAN_H
#define F_FILEMAN_H

#include <QDialog>
#include "QtCore"
#include "QtGui"
#include "QFileSystemModel"
namespace Ui {
class f_fileman;
}

class f_fileman : public QDialog
{
    Q_OBJECT
    
public:
    explicit f_fileman(QWidget *parent = 0);
    ~f_fileman();
    
private slots:
    void on_treeView_clicked(const QModelIndex &index);

private:
    Ui::f_fileman *ui;
    QFileSystemModel *dirmodel;
    QFileSystemModel *filemodel;
};

#endif // F_FILEMAN_H
















//https://www.youtube.com/watch?v=92biLZST6Vg
