#include <iostream>
#include "retangulo.h"

Retangulo::Retangulo(double altura, double largura){
    setAltura(altura);
    setLargura(largura);
}

void Retangulo:: setAltura(double altura){
    if (altura < 20.0 && altura > 0.0){
     n_altura = altura;
    }else{
        n_altura = 1.0;
    }
}

void Retangulo:: setLargura(double largura){
    if (largura < 20.0 && largura > 0.0){
        n_largura = largura;
    }else{
        n_largura = 1.0;
    }
}

double Retangulo::getAltura() const {
    return n_altura;
}

double Retangulo::getLargura() const {
    return n_largura;
}

double Retangulo::perimetro() {
    return ((n_largura + n_altura)*2);
}

double Retangulo::area() {
    return (n_largura * n_altura);
}


