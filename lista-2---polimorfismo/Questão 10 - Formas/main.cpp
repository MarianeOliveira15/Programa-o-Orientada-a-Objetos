#include <iostream>

#include "Circulo.h"
#include "Quadrado.h"
#include "Triangulo.h"
 
int main() {
	//FormaBidimensional fd(2); // ERRO!!!!  

    //FormaBidimensional *p; // o ponteiro pode existi

    Quadrado quadrado {6.9};
    Circulo circulo {1.3};
    Triangulo triangulo {2.3,7.9};
    
    FormaBidimensional *f(nullptr);
    
    f = &quadrado;
    f->calcularArea();
    f->calcularPerimetro();
    f->desenhar();
    
    f = &circulo;
    f->calcularArea();
    f->calcularPerimetro();
    f->desenhar();
    
    f = &triangulo;
    f->calcularArea();
    f->calcularPerimetro();
    f->desenhar();
	return 0;
}
