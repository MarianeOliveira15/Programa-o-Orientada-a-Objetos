#pragma once

#include "FormaBidimensional.h"
#include <cmath>
#include <iostream>
using std::cout, std::endl;

class Circulo : public FormaBidimensional
{
public:
  Circulo(double r) : FormaBidimensional{99999}, raio(r) {}

  void desenhar() override {
    cout << "  _ " << endl;
    cout << "/   \\" << endl;
    cout << "\\   /" << endl;
    cout << "  - " << endl;
  }
  
    void calcularArea() override {
       cout << "Área do Círculo: " << M_PI * raio * raio << endl;
    }

    void calcularPerimetro() override {
        cout << "Perímetro do Círculo: " << 2 * M_PI * raio << endl;
    }
    
    private:
    double raio;
};
