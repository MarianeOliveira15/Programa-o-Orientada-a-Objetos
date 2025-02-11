#pragma once

#include <string>

#include "capa.h"
#include "varinha.h"
#include "Humano.h"

using std::string;


class Bruxo : public Humano{
    public:
    
    Bruxo (string nome, string casa, string feitico) ;
    
    void setNome(string nome);
    
    string getNome() const;
    
    void setCasa(string casa);
    
    string getCasa() const;
    
    void setFeitico(string feitico);
    
    string getFeitico() const;
    
    void lancarFeitico() const;

    void display() const;
    
    string verificaVarinha(Varinha varinha);
    
    string verificaCapa(Capa capa);
    
    void setVarinha(Varinha *varinha) { this->varinha = varinha;}
    
    void setCapa(Capa *capa) { this->capa = capa;}
    
    string getNome() const{return nome;}
    
    void setNome(string nome){n_nome = (nome.empty() ? "\"Sem nome\"" : nome);}
    

    private:
    
    string n_casa;
    string n_feitico;
    
    Varinha *varinha;
    Capa *capa;
    
};