/********************************************************************************
** Form generated from reading UI file 'ingresarvotante.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGRESARVOTANTE_H
#define UI_INGRESARVOTANTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ingresarVotante
{
public:
    QFrame *frame_7;
    QLabel *label_13;
    QPushButton *pushButton_3;
    QLineEdit *lineEdit;
    QLabel *label_10;
    QLabel *label_12;
    QFrame *frame_8;
    QLabel *label_11;

    void setupUi(QWidget *ingresarVotante)
    {
        if (ingresarVotante->objectName().isEmpty())
            ingresarVotante->setObjectName(QString::fromUtf8("ingresarVotante"));
        ingresarVotante->resize(627, 508);
        frame_7 = new QFrame(ingresarVotante);
        frame_7->setObjectName(QString::fromUtf8("frame_7"));
        frame_7->setGeometry(QRect(80, 20, 153, 89));
        frame_7->setStyleSheet(QString::fromUtf8("image: url(:/resource/img/Escudo.png);\n"
"image: url(:/resource/img/Escudo2.png);"));
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        label_13 = new QLabel(ingresarVotante);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(90, 260, 121, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        label_13->setFont(font);
        label_13->setLayoutDirection(Qt::LeftToRight);
        label_13->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 25 9pt \"Microsoft YaHei\";"));
        label_13->setAlignment(Qt::AlignCenter);
        pushButton_3 = new QPushButton(ingresarVotante);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(290, 320, 81, 28));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        pushButton_3->setFont(font1);
        lineEdit = new QLineEdit(ingresarVotante);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(220, 270, 211, 31));
        label_10 = new QLabel(ingresarVotante);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(30, 60, 529, 89));
        label_10->setFont(font);
        label_10->setLayoutDirection(Qt::LeftToRight);
        label_10->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 25 9pt \"Microsoft YaHei\";"));
        label_10->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(ingresarVotante);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(220, 150, 161, 61));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setItalic(false);
        label_12->setFont(font2);
        label_12->setLayoutDirection(Qt::LeftToRight);
        label_12->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 10pt \"Microsoft YaHei\";"));
        label_12->setAlignment(Qt::AlignCenter);
        frame_8 = new QFrame(ingresarVotante);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(340, 20, 153, 89));
        frame_8->setStyleSheet(QString::fromUtf8("image: url(:/resource/img/TSE.png);"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        label_11 = new QLabel(ingresarVotante);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(180, 20, 209, 89));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Microsoft YaHei")});
        font3.setPointSize(12);
        font3.setBold(false);
        font3.setItalic(false);
        label_11->setFont(font3);
        label_11->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 12pt \"Microsoft YaHei\";"));
        label_11->setAlignment(Qt::AlignCenter);

        retranslateUi(ingresarVotante);

        QMetaObject::connectSlotsByName(ingresarVotante);
    } // setupUi

    void retranslateUi(QWidget *ingresarVotante)
    {
        ingresarVotante->setWindowTitle(QCoreApplication::translate("ingresarVotante", "Form", nullptr));
        label_13->setText(QCoreApplication::translate("ingresarVotante", "C\303\251dula:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ingresarVotante", "Consultar", nullptr));
        lineEdit->setText(QString());
        label_10->setText(QCoreApplication::translate("ingresarVotante", "PRESIDENCIA Y VICEPRESIDENCIA DE LA REPUBLICA", nullptr));
        label_12->setText(QCoreApplication::translate("ingresarVotante", "Consultar Padr\303\263n", nullptr));
        label_11->setText(QCoreApplication::translate("ingresarVotante", "ELECCIONES 2022", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ingresarVotante: public Ui_ingresarVotante {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGRESARVOTANTE_H
