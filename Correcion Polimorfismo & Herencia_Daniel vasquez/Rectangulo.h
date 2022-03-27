//
// Created by Admin on 20/03/2022.
//

#ifndef FIGURASPOO_RECTANGULO_H
#define FIGURASPOO_RECTANGULO_H

#include "AbstractFigura.h"

class Rectangulo : public AbstractFigura {
    private:
        float base;
        float altura;
        int color;
    public:
        Rectangulo();
        Rectangulo(float base, float altura);
        void mostraArea() override;
        void mostraPerimetro() override;
        void mostraFigura() override;
        void mostraFigura(int color) override;
        float getArea() override;
};


#endif //FIGURASPOO_RECTANGULO_H
