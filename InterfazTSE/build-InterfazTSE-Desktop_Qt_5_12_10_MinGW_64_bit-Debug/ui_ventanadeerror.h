/********************************************************************************
** Form generated from reading UI file 'ventanadeerror.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANADEERROR_H
#define UI_VENTANADEERROR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventanaDeError
{
public:
    QLabel *label;
    QFrame *frame_7;
    QPushButton *pushButton;

    void setupUi(QWidget *ventanaDeError)
    {
        if (ventanaDeError->objectName().isEmpty())
            ventanaDeError->setObjectName(QString::fromUtf8("ventanaDeError"));
        ventanaDeError->resize(823, 200);
        label = new QLabel(ventanaDeError);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(170, 80, 621, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(10);
        label->setFont(font);
        frame_7 = new QFrame(ventanaDeError);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(10, 50, 153, 89));
        frame_7->setStyleSheet(QString::fromUtf8("image: url(:/resource/img/Escudo.png);\n"
"image: url(:/resource/img/Error.png);"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(ventanaDeError);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(410, 130, 93, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(8);
        pushButton->setFont(font1);

        retranslateUi(ventanaDeError);

        QMetaObject::connectSlotsByName(ventanaDeError);
    } // setupUi

    void retranslateUi(QWidget *ventanaDeError)
    {
        ventanaDeError->setWindowTitle(QApplication::translate("ventanaDeError", "Form", nullptr));
        label->setText(QApplication::translate("ventanaDeError", "Se ha producido un error en el programa. Lamentamos el inconveniente!", nullptr));
        pushButton->setText(QApplication::translate("ventanaDeError", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventanaDeError: public Ui_ventanaDeError {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANADEERROR_H
