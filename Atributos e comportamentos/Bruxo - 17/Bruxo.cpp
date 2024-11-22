#include "Bruxo.hpp"
#include <iostream>
using std::cout, std::endl;

Bruxo::Bruxo (string nome, string casa, string feitico){
    setNome(nome);
    setCasa(casa);
    setFeitico(feitico);
}

void Bruxo::setNome(string nome){
    n_nome = (nome.empty() ? "\"Sem nome\"" : nome);
}

string Bruxo::getNome() const{
    return n_nome;
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

void Bruxo::lancarFeitico() const {
    cout << "Lançando feitiço " << n_feitico << "!" << endl;
}

void Bruxo::display() const{
    std::cout << getNome() << " " << getCasa() << " " << getFeitico() << std::endl;
}