/*#ifndef BUTTON_H
#define BUTTON_H

#include <QDialog>

namespace Ui {
class button;
}

class button : public QDialog
{
    Q_OBJECT

public:
    explicit button(QWidget *parent = 0);
    ~button();

private:
    Ui::button *ui;
};

#endif // BUTTON_H*/
#ifndef BUTTON_H
 #define BUTTON_H

 #include <QToolButton>

 class Button : public QToolButton
 {
     Q_OBJECT

 public:
     Button(const QString &text, QWidget *parent = 0);

     QSize sizeHint() const;
 };

 #endif
