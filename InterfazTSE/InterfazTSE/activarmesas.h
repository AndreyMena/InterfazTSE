#ifndef ACTIVARMESAS_H
#define ACTIVARMESAS_H

#include <QWidget>

namespace Ui {
class activarMesas;
}

class activarMesas : public QWidget
{
    Q_OBJECT

public:
    explicit activarMesas(QWidget *parent = nullptr);
    ~activarMesas();

private:
    Ui::activarMesas *ui;
};

#endif // ACTIVARMESAS_H
