#ifndef FIGURASPOO_ABSTRACTFIGURA_H
#define FIGURASPOO_ABSTRACTFIGURA_H

#include <iostream>

using namespace std;

class AbstractFigura{
protected:
    float area{};
    int color{};
public:
    virtual void mostraArea() = 0;
    virtual void mostraPerimetro() = 0;
    virtual void mostraFigura(int color) = 0;
    virtual void mostraFigura() = 0;
    virtual float getArea();
};


#endif //FIGURASPOO_ABSTRACTFIGURA_H
