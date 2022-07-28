#ifndef ACTIVARMESAS_H
#define ACTIVARMESAS_H

#include <QWidget>
#include "votar.h"
#include "comunicaciones.h"

class ingresarVotante;

namespace Ui {
class activarMesas;

}

class activarMesas : public QWidget
{
    Q_OBJECT

public:
    explicit activarMesas(Comunicaciones* comunicaciones = nullptr, ingresarVotante* ingresarvotante = nullptr);
    //void enableButton(int button);
    ~activarMesas();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::activarMesas *ui;
    votar* votar1;
    Comunicaciones* comunicaciones;
    ingresarVotante* ingresarvotante;
};

#endif // ACTIVARMESAS_H
