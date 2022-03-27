#ifndef FIGURASPOO_TRIANGULO_H
#define FIGURASPOO_TRIANGULO_H

#include "AbstractFigura.h"

class Triangulo:
        public AbstractFigura {
private:
    float altura;
    int color{};
public:
    Triangulo();
    explicit Triangulo(float altura);
    void mostraArea() override;
    void mostraPerimetro() override;
    void mostraFigura() override;
    void mostraFigura(int color) override;
    float getArea() override;
};


#endif //FIGURASPOO_TRIANGULO_H
