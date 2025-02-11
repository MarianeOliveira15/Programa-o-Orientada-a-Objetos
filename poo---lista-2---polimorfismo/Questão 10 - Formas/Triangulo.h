#pragma once

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Triangulo : public FormaBidimensional
{
public:
  Triangulo(double b, double h) : FormaBidimensional{3} , base(b), altura(h) {}

  void desenhar() override{
    cout << "   .    " << endl;
    cout << "  / \\  " << endl;
    cout << " /   \\ " << endl;
    cout << "/_____\\" << endl;
  }
  
 void calcularArea() override {
    cout << "Área do Triângulo: " << (base * altura) / 2 << std::endl;
}

void calcularPerimetro() override {
    // Exemplo para triângulo equilátero
    cout << "Perímetro do Triângulo: " << 3 * base << endl;
}
  
  private:
    double base, altura;
    

};
