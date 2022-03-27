#ifndef FIGURASPOO_VIEW_H
#define FIGURASPOO_VIEW_H

#include <iostream>
#include <vector>
#include "AbstractFigura.h"
#include "Rectangulo.h"
#include "Cuadrado.h"
#include "Circulo.h"
#include "Triangulo.h"

using namespace std;

class View {
private:
    vector<AbstractFigura*> figurasVector;
public:
    static void combinarReferencias();
    void agregarCirculo();
    void agregarCuadrado();
    void agregarRectangulo();
    void agregarTriangulo();
    void mostrarAreas();
    void mostrarPerimetros();
    void mostrarFiguras(int color);
    void mostrarSumaAreas();
};


#endif //FIGURASPOO_VIEW_H
