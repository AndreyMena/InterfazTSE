#ifndef CONTEOVOTOS_H
#define CONTEOVOTOS_H

#include <QWidget>

namespace Ui {
class conteoVotos;
}

class conteoVotos : public QWidget
{
    Q_OBJECT

public:
    explicit conteoVotos(QWidget *parent = nullptr);
    ~conteoVotos();

private:
    Ui::conteoVotos *ui;
};

#endif // CONTEOVOTOS_H
