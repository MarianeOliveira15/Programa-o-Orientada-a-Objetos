#include <iostream>
#include <format>
#include "Bruxo.h"
#include "capa.h"
#include "varinha.h"

using std::cout, std::endl, std::format;

Bruxo::Bruxo (string nome, string casa, string feitico) : Humano (nome), varinha(nullptr), capa(nullptr) {
    setNome(nome);
    setCasa(casa);
    setFeitico(feitico);
}


void Bruxo::setCasa(string casa){
    if (casa == "Grifinória" or casa == "Sonserina" or casa == "Lufa-lufa" or casa == "Corvinal"){
        n_casa = casa;
    }else{
        n_casa = "Vazia";
    }
}

string Bruxo::getCasa() const{
    return n_casa;
}

void Bruxo::setFeitico(string feitico){
    n_feitico = (feitico.empty() ? "\"Sem feitiço\"" : feitico);
}

string Bruxo::getFeitico() const{
    return n_feitico;
}

void Bruxo::display() const {
    cout <<format("O Bruxo {} da Casa {} possui o feitico {} ", getNome(), getCasa(), getFeitico()) <<endl;
    if (varinha){
        cout << varinha->displayVa() << "." <<endl;
    }
    if (capa){
        cout << capa->displayc() << "." << endl;
    }
}