#ifndef INGRESARVOTANTE_H
#define INGRESARVOTANTE_H

#include "comunicaciones.h"
#include "log.h"
#include "activarmesas.h"

#include <QWidget>

namespace Ui {
class ingresarVotante;
}

class ingresarVotante : public QWidget
{
    Q_OBJECT

public:
    explicit ingresarVotante(QWidget *parent = nullptr);
    void votanteValido();
    void votanteInvalido();
    void execute(string datos);
    ~ingresarVotante();

private slots:
    void on_pushButton_3_clicked();

private:
    Ui::ingresarVotante *ui;
    Comunicaciones* comunicaciones;
    Log* log;
    string cedula;
    activarMesas* activarmesas;
};

#endif // INGRESARVOTANTE_H
