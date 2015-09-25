/********************************************************************************
** Form generated from reading UI file 'button.ui'
**
** Created: Sun Mar 8 22:16:46 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTON_H
#define UI_BUTTON_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_button
{
public:

    void setupUi(QDialog *button)
    {
        if (button->objectName().isEmpty())
            button->setObjectName(QString::fromUtf8("button"));
        button->resize(400, 300);

        retranslateUi(button);

        QMetaObject::connectSlotsByName(button);
    } // setupUi

    void retranslateUi(QDialog *button)
    {
        button->setWindowTitle(QApplication::translate("button", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class button: public Ui_button {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTON_H
