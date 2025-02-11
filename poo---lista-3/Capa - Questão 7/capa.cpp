#include <iostream>
#include <string>
#include <format>
#include "capa.h"
using std::string, std::format;

Capa::Capa (int tamanho, string cor,string casa){
        setTamanho(tamanho);
        setCasa(casa);
    }

int Capa::getTamanho() const {
    return n_tamanho;
}

void Capa::setTamanho(int tamanho) {
    n_tamanho = tamanho;
}

string Capa::getCor() const {
    return n_cor;
}

string Capa::getCasa() const {
    return n_casa;
}

void Capa::setCasa(string casa) {
    if (casa == "Grifinória") {
        n_casa = casa;
        n_cor = "Vermelho";
    } else if (casa == "Sonserina") {
        n_casa = casa;
        n_cor = "Verde";
    } else if (casa == "Corvinal") {
        n_casa = casa;
        n_cor = "Azul";
    } else if (casa == "Lufa-Lufa") {
        n_casa = casa;
        n_cor = "Amarelo";
    } 
}

string Capa::display() const {
    return format("Capa do Bruxo: Tamanho: {}, Cor: {} e Casa: {}\n", getTamanho(), getCor(), getCasa());
}