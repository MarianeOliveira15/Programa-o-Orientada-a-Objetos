#pragma once

#include <string>

using std::string;


class Bruxo {
    public:
    
    Bruxo (string nome, string casa, string feitico);
    
    void setNome(string nome);
    
    string getNome() const;
    
    void setCasa(string casa);
    
    string getCasa() const;
    
    void setFeitico(string feitico);
    
    string getFeitico() const;
    
    void lancarFeitico() const;

    void display() const;
    
    
    private:
    
    string n_nome;
    string n_casa;
    string n_feitico;
    
};