#ifndef VENTANADEERROR_H
#define VENTANADEERROR_H

#include <QWidget>

namespace Ui {
class ventanaDeError;
}

class ventanaDeError : public QWidget
{
    Q_OBJECT

public:
    explicit ventanaDeError(QWidget *parent = nullptr);
    ~ventanaDeError();

private:
    Ui::ventanaDeError *ui;
};

#endif // VENTANADEERROR_H
