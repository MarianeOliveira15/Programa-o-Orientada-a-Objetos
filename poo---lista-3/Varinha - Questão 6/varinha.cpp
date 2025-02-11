#include <iostream>
#include <format>
#include <string>
#include "varinha.h"
using std::format, std::string;

Varinha:: Varinha (string madeira, string nucleo, double comprimento ){
    
    setMadeira(madeira);
    setNucleo(nucleo);
    setComprimento(comprimento);
}
    
void Varinha::setMadeira (string madeira) {
    n_madeira = madeira;
}

void Varinha::setNucleo (string nucleo) {
    n_nucleo = nucleo;
}

void Varinha::setComprimento (double comprimento) {
    n_comprimento = comprimento;
}

string Varinha::getMadeira () const {
    return n_madeira;
}
    
    
string Varinha::getNucleo () const {
    return n_nucleo;
}

double Varinha::getComprimento () const {
    return n_comprimento;
}

    
string Varinha::display (){
    return (format ("A varinha possui madeira de tipo {} com nucleo de {} e comprimento {}\n", getMadeira(), getNucleo(), getComprimento()));
}
