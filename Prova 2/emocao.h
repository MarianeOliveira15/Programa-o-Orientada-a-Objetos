#pragma once
#include <iostream>
#include <string>
using namespace std;

class Emocao {
    public:
    Emocao (string nome, bool estado = false) : nome(nome), estado(estado) {}
    
    virtual void processar (string descricao) = 0;
    
    string getNome () {return nome;}
    
    bool estaEstado () {return estado;}
    
    void setEstado (bool novoEstado) { estado = novoEstado;}
    
    private:
    string nome; 
    bool estado ;
};