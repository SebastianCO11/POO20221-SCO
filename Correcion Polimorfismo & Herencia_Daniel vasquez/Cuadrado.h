//
// Created by Admin on 20/03/2022.
//

#ifndef FIGURASPOO_CUADRADO_H
#define FIGURASPOO_CUADRADO_H

#include "AbstractFigura.h"

class Cuadrado : public AbstractFigura {
private:
    float lado;
    int color{};
public:
    Cuadrado();
    explicit Cuadrado(float lado);
    void mostraArea() override;
    void mostraPerimetro() override;
    void mostraFigura() override;
    void mostraFigura(int color) override;
    float getArea() override;
};


#endif //FIGURASPOO_CUADRADO_H
