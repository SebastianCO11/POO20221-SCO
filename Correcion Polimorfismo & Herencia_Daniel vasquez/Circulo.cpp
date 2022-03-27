#pragma clang diagnostic push
#pragma ide diagnostic ignored "cert-flp30-c"

#include "Circulo.h"
#include "windows.h"

Circulo::Circulo(){
    radio = 0;
    area = 0;
}

Circulo::Circulo(float radio){
    this->radio = radio;
}

void Circulo::mostraArea(){
    float areaCirculo = M_PI * pow(radio, 2);
    area = areaCirculo;
    cout << "Circulo de radio: " << radio << "\n";
    cout << "El area del circulo es:" << areaCirculo << "\n\n";
}
void Circulo::mostraPerimetro(){
    float perimetroCirculo = M_PI * 2 * radio;
    cout << "Circulo de radio: " << radio << "\n";
    cout << "El perimetro del circulo es:" << perimetroCirculo << "\n\n";
}
void Circulo::mostraFigura(){
    cout << "Figura del circulo de radio: " << radio << "\n\n";
    for (float i = 0; i <= radio * 2; i++) {
        for (float j = 0; j <= radio * 2; j++) {
            if ( pow(j - radio, 2.0) + pow(i - radio, 2.0) <= pow(radio, 2)) {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
    cout << "\n";
}

void Circulo::mostraFigura(int color){
    cout << "Figura del circulo con color de radio: " << radio << "\n\n";
    HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    SetConsoleTextAttribute(hConsole, color);
    for (float i = 0; i <= radio * 2; i++) {
        for (float j = 0; j <= radio * 2; j++) {
            if ( pow(j - radio, 2.0) + pow(i - radio, 2.0) <= pow(radio, 2)) {
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
    SetConsoleTextAttribute(hConsole, 7);
    cout << "\n";
}

float Circulo::getArea(){
    return this->area;
}
