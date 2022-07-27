#ifndef VOTAR_H
#define VOTAR_H

#include <QWidget>
#include "comunicaciones.h"
#include "log.h"
//#include "activarmesas.h"

class activarMesas;

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


    void on_votarPLN_clicked();

    void on_votarPAC_clicked();

    void on_votarUP_clicked();

    void on_votarFA_clicked();

    void execute(char* mensaje);

    void votoValido();

    void votoInvalido();

private:
    Ui::votar *ui;
    int button;
    Comunicaciones* comunicaciones;
    Log* log;
    activarMesas* activarmesa;
    //Controlador *controlador;
};

#endif // VOTAR_H
