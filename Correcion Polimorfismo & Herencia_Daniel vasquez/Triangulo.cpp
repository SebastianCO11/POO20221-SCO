#include "Triangulo.h"
#include "windows.h"
#include <cmath>

Triangulo::Triangulo(){
    altura = 0;
    0;
}
Triangulo::Triangulo(float altura){
    this->altura = altura;
}
void Triangulo::mostraArea(){
    float areaTriangulo = (altura*altura)/2;
    area = areaTriangulo;
    cout << "Triangulo de altura: " << altura << "\n";
    cout << "El area del Triangulo es: " << areaTriangulo << "\n\n";
}
void Triangulo::mostraPerimetro(){
    float perimetroTriangulo = sqrt((altura*altura)*2);
    cout << "Triangulo de altura: " << altura << "\n";
    cout << "El perimetro del triangulo es: " << perimetroTriangulo << "\n\n";
}

void Triangulo::mostraFigura(){
    cout << "Figura del circulo de altura: " << altura << "\n\n";
    for (int i = 1; i <= altura; i++){
        int j;
        for (j = 0; j < i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";
}

void Triangulo::mostraFigura(int color){
    cout << "Figura del circulo con color de altura: " << altura << "\n\n";
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, color);
    for (int i = 1; i <= altura; i++){
        int j;
        for (j = 0; j < i; j++){
            cout << "*";
        }
        cout << "\n";
    }
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\n";
}

float Triangulo::getArea(){
    return this->area;
}

