#ifndef VOTAR_H
#define VOTAR_H

#include <QWidget>
#include "controlador.h"

namespace Ui {
class votar;
}

class votar : public QWidget
{
    Q_OBJECT

public:
    explicit votar(QWidget *parent = nullptr);
    void changeButton(int button);
    ~votar();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::votar *ui;
    int button;
    Controlador *controlador;
};

#endif // VOTAR_H
