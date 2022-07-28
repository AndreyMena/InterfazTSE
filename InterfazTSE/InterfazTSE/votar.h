#ifndef VOTAR_H
#define VOTAR_H

#include <QWidget>
#include "comunicaciones.h"
#include "log.h"
//#include "activarmesas.h"

class ingresarVotante;
class activarMesas;

namespace Ui {
class votar;
}

class votar : public QWidget
{
    Q_OBJECT

public:
    explicit votar(Comunicaciones* comunicaciones = nullptr, ingresarVotante* ingresarvotante = nullptr);
    void changeButton(int button);
    ~votar();
    ingresarVotante* ingresarvotante;

private slots:


    void on_votarPLN_clicked();

    void on_votarPAC_clicked();

    void on_votarUP_clicked();

    void on_votarFA_clicked();

    void execute(std::string mensaje);

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
