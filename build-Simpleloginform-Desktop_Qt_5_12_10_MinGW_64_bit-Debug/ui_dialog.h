/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QFrame *back;
    QPushButton *confirm;
    QPushButton *cancel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *password_lineEdit;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *email_lineEdit;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *confirm_lineEdit;
    QLabel *label_icon;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(349, 294);
        back = new QFrame(Dialog);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(9, 109, 331, 171));
        back->setFrameShape(QFrame::StyledPanel);
        back->setFrameShadow(QFrame::Raised);
        confirm = new QPushButton(back);
        confirm->setObjectName(QString::fromUtf8("confirm"));
        confirm->setGeometry(QRect(30, 140, 111, 22));
        cancel = new QPushButton(back);
        cancel->setObjectName(QString::fromUtf8("cancel"));
        cancel->setGeometry(QRect(189, 140, 111, 22));
        widget = new QWidget(back);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 60, 301, 24));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        password_lineEdit = new QLineEdit(widget);
        password_lineEdit->setObjectName(QString::fromUtf8("password_lineEdit"));

        horizontalLayout->addWidget(password_lineEdit);

        widget1 = new QWidget(back);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 20, 301, 24));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        email_lineEdit = new QLineEdit(widget1);
        email_lineEdit->setObjectName(QString::fromUtf8("email_lineEdit"));

        horizontalLayout_2->addWidget(email_lineEdit);

        widget2 = new QWidget(back);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(20, 100, 301, 24));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(widget2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        confirm_lineEdit = new QLineEdit(widget2);
        confirm_lineEdit->setObjectName(QString::fromUtf8("confirm_lineEdit"));

        horizontalLayout_3->addWidget(confirm_lineEdit);

        label_icon = new QLabel(Dialog);
        label_icon->setObjectName(QString::fromUtf8("label_icon"));
        label_icon->setGeometry(QRect(140, 20, 81, 81));

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
        confirm->setText(QApplication::translate("Dialog", "Confirm", nullptr));
        cancel->setText(QApplication::translate("Dialog", "Cancel", nullptr));
        label_2->setText(QApplication::translate("Dialog", "Password:", nullptr));
        label->setText(QApplication::translate("Dialog", "Email:", nullptr));
        label_3->setText(QApplication::translate("Dialog", "Confirm Password:", nullptr));
        label_icon->setText(QApplication::translate("Dialog", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
