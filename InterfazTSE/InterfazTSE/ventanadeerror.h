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

private slots:
    void on_botonOk_clicked();

private:
    Ui::ventanaDeError *ui;
};

#endif // VENTANADEERROR_H
