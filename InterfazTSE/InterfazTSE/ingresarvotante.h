#ifndef INGRESARVOTANTE_H
#define INGRESARVOTANTE_H

#include <QWidget>

namespace Ui {
class ingresarVotante;
}

class ingresarVotante : public QWidget
{
    Q_OBJECT

public:
    explicit ingresarVotante(QWidget *parent = nullptr);
    ~ingresarVotante();

private:
    Ui::ingresarVotante *ui;
};

#endif // INGRESARVOTANTE_H
