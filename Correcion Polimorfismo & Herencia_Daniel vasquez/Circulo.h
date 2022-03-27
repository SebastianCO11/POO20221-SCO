#ifndef FIGURASPOO_CIRCULO_H
#define FIGURASPOO_CIRCULO_H

#include "AbstractFigura.h"
#include <cmath>

class Circulo : public AbstractFigura{
private:
    float radio;
public:
    Circulo();
    explicit Circulo(float radio);
    void mostraArea() override;
    void mostraPerimetro() override;
    void mostraFigura() override;
    void mostraFigura(int color) override;
    float getArea() override;
};

#endif //FIGURASPOO_CIRCULO_H
