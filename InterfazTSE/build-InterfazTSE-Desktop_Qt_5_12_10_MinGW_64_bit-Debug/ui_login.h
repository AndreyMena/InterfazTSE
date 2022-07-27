/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QFrame *frame_8;
    QLabel *label_10;
    QFrame *frame_7;
    QLabel *label_11;
    QLabel *label_12;
    QLineEdit *lnuser;
    QLineEdit *lnpassword;
    QLabel *label_13;
    QLabel *label_14;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(627, 508);
        frame_8 = new QFrame(Login);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(340, 10, 153, 89));
        frame_8->setStyleSheet(QString::fromUtf8("image: url(:/resource/img/TSE.png);"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        label_10 = new QLabel(Login);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 50, 529, 89));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(3);
        label_10->setFont(font);
        label_10->setLayoutDirection(Qt::LeftToRight);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 25 9pt \"Microsoft YaHei\";"));
        label_10->setAlignment(Qt::AlignCenter);
        frame_7 = new QFrame(Login);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(80, 10, 153, 89));
        frame_7->setStyleSheet(QString::fromUtf8("image: url(:/resource/img/Escudo.png);\n"
"image: url(:/resource/img/Escudo2.png);"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_11 = new QLabel(Login);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(180, 10, 209, 89));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Microsoft YaHei\";"));
        label_11->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(Login);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(220, 140, 161, 61));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label_12->setFont(font2);
        label_12->setLayoutDirection(Qt::LeftToRight);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"Microsoft YaHei\";"));
        label_12->setAlignment(Qt::AlignCenter);
        lnuser = new QLineEdit(Login);
        lnuser->setObjectName(QString::fromUtf8("lnuser"));
        lnuser->setGeometry(QRect(230, 260, 211, 31));
        lnpassword = new QLineEdit(Login);
        lnpassword->setObjectName(QString::fromUtf8("lnpassword"));
        lnpassword->setGeometry(QRect(230, 320, 211, 31));
        label_13 = new QLabel(Login);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(100, 250, 121, 41));
        label_13->setFont(font);
        label_13->setLayoutDirection(Qt::LeftToRight);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 25 9pt \"Microsoft YaHei\";"));
        label_13->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(Login);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(100, 310, 121, 41));
        label_14->setFont(font);
        label_14->setLayoutDirection(Qt::LeftToRight);
        label_14->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 25 9pt \"Microsoft YaHei\";"));
        label_14->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(Login);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(300, 380, 81, 28));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei"));
        pushButton_3->setFont(font3);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QApplication::translate("Login", "Form", nullptr));
        label_10->setText(QApplication::translate("Login", "PRESIDENCIA Y VICEPRESIDENCIA DE LA REPUBLICA", nullptr));
        label_11->setText(QApplication::translate("Login", "ELECCIONES 2022", nullptr));
        label_12->setText(QApplication::translate("Login", "Iniciar Sesi\303\263n", nullptr));
        lnuser->setText(QString());
        lnpassword->setText(QString());
        label_13->setText(QApplication::translate("Login", "Usuario:", nullptr));
        label_14->setText(QApplication::translate("Login", "Contrase\303\261a:", nullptr));
        pushButton_3->setText(QApplication::translate("Login", "Ingresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
