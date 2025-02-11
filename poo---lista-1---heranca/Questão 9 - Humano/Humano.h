#pragma once 
#include <iostream>
#include <string>
using namespace std;

class Humano {
    public:
    
    Humano (string Nome) {};
    
    string getNome() const{return nome;}
    
    void setNome(string nome){this->nome = (nome.empty() ? "\"Sem nome\"" : nome);}
    
    private:
    string n_nome; 
};
