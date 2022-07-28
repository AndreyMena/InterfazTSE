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
    void cambiarVotos(std::string pln, std::string pac, std::string up, std::string fa);

private:
    Ui::conteoVotos *ui;
};

#endif // CONTEOVOTOS_H
