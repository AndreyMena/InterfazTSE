#ifndef CONFIRMARVOTO_H
#define CONFIRMARVOTO_H

#include <QWidget>

namespace Ui {
class confirmarVoto;
}

class confirmarVoto : public QWidget
{
    Q_OBJECT

public:
    explicit confirmarVoto(QWidget *parent = nullptr);
    ~confirmarVoto();

private slots:
    void on_botonSi_clicked();

    void on_botonNo_clicked();

private:
    Ui::confirmarVoto *ui;
};

#endif // CONFIRMARVOTO_H
