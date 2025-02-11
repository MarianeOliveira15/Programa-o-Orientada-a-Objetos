#pragma once

#include "FormaBidimensional.h"

#include <iostream>
using std::cout, std::endl;

class Quadrado : public FormaBidimensional
{
public:
  Quadrado(double l) : FormaBidimensional{4} , lado(l) {}

  void desenhar() override {
    cout << "+---+" << endl;
    cout << "|   |" << endl;
    cout << "+---+" << endl;
  }
  
  void calcularArea() override {
    std::cout << "Área do Quadrado: " << lado * lado << std::endl;
}

void calcularPerimetro() override {
    std::cout << "Perímetro do Quadrado: " << 4 * lado << std::endl;
}

  private:
    double lado;
};
