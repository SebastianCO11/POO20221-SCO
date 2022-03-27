#include "View.h"
// Elimine sus referencias debido a que nunca se usan
void View::combinarReferencias(){
}

void View::agregarCirculo(){
    float radio;
    cout << "Digita el radio del circulo: \n:";
    cin >> radio;
    Circulo circulo(radio);
    figurasVector.push_back(new Circulo(circulo));
}
void View::agregarCuadrado(){
    float lado;
    cout << "Digita el lado del cuadrado: \n:";
    cin >> lado;
    Cuadrado cuadrado(lado);
    figurasVector.push_back(new Cuadrado(cuadrado));
}
void View::agregarRectangulo(){
    float base, altura;
    cout << "Digita la base del rectangulo: \n:";
    cin >> base;
    cout << "Digita la altura del rectangulo: \n:";
    cin >> altura;
    Rectangulo rectangulo(base, altura);
    figurasVector.push_back(new Rectangulo(rectangulo));
}

void View::agregarTriangulo(){
    float altura;
    cout << "Digita la altura del Triangulo: \n:";
    cin >> altura;
    Triangulo triangulo(altura);
    figurasVector.push_back(new Triangulo(triangulo));
}

void View::mostrarAreas(){
    for (auto & i : figurasVector){
        i->mostraArea();
    }
}
void View::mostrarPerimetros(){
    for (auto & i : figurasVector){
        i->mostraPerimetro();
    }
}

void View::mostrarFiguras(int color){
    for (auto & i : figurasVector){
        i->mostraFigura(color);
    }
}

void View::mostrarSumaAreas(){
    float sumaAreas = 0;
    for (auto & i : figurasVector){
        sumaAreas += i->getArea();
    }
    cout << "La suma de todas las areas es: " << sumaAreas << "\n";
}