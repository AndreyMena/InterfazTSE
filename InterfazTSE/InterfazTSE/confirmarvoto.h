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

private:
    Ui::confirmarVoto *ui;
};

#endif // CONFIRMARVOTO_H
