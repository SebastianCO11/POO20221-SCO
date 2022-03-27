#include "Cuadrado.h"
#include "windows.h"

Cuadrado::Cuadrado(){
    lado = 0;
    area = 0;
}
Cuadrado::Cuadrado(float lado){
    this->lado = lado;
}
void Cuadrado::mostraArea(){
    float areaCuadrado = lado*lado;
    area = areaCuadrado;
    cout << "Cuadrado: " << lado << "x" << lado << "\n";
    cout << "El area del cuadrado es: " << areaCuadrado << "\n\n";
}
void Cuadrado::mostraPerimetro(){
    float perimetroCuadrado = lado*4;
    cout << "Cuadrado: " << lado << "x" << lado << "\n";
    cout << "El perimetro del cuadrado es: " << perimetroCuadrado << "\n\n";
}
void Cuadrado::mostraFigura(){
    cout << "Figura del cuadrado: " << lado << "x" << lado << "\n\n";
    for (float i = 1; i <= lado; i++) {
        for (float j = 1; j <= lado; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}

void Cuadrado::mostraFigura(int color){
    cout << "Figura del cuadrado con color: " << lado << "x" << lado << "\n\n";
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, color);
    for (int i = 1; i <= lado; i++) {
        for (int j = 1; j <= lado; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\n";
}

float Cuadrado::getArea(){
    return this->area;
}
