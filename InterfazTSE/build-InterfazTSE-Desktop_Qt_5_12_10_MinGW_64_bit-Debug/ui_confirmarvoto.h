/********************************************************************************
** Form generated from reading UI file 'confirmarvoto.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMARVOTO_H
#define UI_CONFIRMARVOTO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_confirmarVoto
{
public:
    QLabel *label_12;
    QFrame *frame_8;
    QFrame *frame_7;
    QLabel *label_10;
    QLabel *label_11;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *confirmarVoto)
    {
        if (confirmarVoto->objectName().isEmpty())
            confirmarVoto->setObjectName(QString::fromUtf8("confirmarVoto"));
        confirmarVoto->resize(553, 377);
        label_12 = new QLabel(confirmarVoto);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(0, 170, 541, 89));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        label_12->setFont(font);
        label_12->setLayoutDirection(Qt::LeftToRight);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"Microsoft YaHei\";"));
        label_12->setAlignment(Qt::AlignCenter);
        frame_8 = new QFrame(confirmarVoto);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(320, 30, 153, 89));
        frame_8->setStyleSheet(QString::fromUtf8("image: url(:/resource/img/TSE.png);"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        frame_7 = new QFrame(confirmarVoto);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(60, 30, 153, 89));
        frame_7->setStyleSheet(QString::fromUtf8("image: url(:/resource/img/Escudo.png);\n"
"image: url(:/resource/img/Escudo2.png);"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_10 = new QLabel(confirmarVoto);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(10, 70, 529, 89));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(9);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(3);
        label_10->setFont(font1);
        label_10->setLayoutDirection(Qt::LeftToRight);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 25 9pt \"Microsoft YaHei\";"));
        label_10->setAlignment(Qt::AlignCenter);
        label_11 = new QLabel(confirmarVoto);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(160, 30, 209, 89));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label_11->setFont(font2);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Microsoft YaHei\";"));
        label_11->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(confirmarVoto);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 280, 81, 28));
        pushButton_2 = new QPushButton(confirmarVoto);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(310, 280, 81, 28));

        retranslateUi(confirmarVoto);

        QMetaObject::connectSlotsByName(confirmarVoto);
    } // setupUi

    void retranslateUi(QWidget *confirmarVoto)
    {
        confirmarVoto->setWindowTitle(QApplication::translate("confirmarVoto", "Form", nullptr));
        label_12->setText(QApplication::translate("confirmarVoto", "\302\277Seguro que desea votar por xxxxxx?", nullptr));
        label_10->setText(QApplication::translate("confirmarVoto", "PRESIDENCIA Y VICEPRESIDENCIA DE LA REPUBLICA", nullptr));
        label_11->setText(QApplication::translate("confirmarVoto", "ELECCIONES 2022", nullptr));
        pushButton->setText(QApplication::translate("confirmarVoto", "S\303\255", nullptr));
        pushButton_2->setText(QApplication::translate("confirmarVoto", "No", nullptr));
    } // retranslateUi

};

namespace Ui {
    class confirmarVoto: public Ui_confirmarVoto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMARVOTO_H
