#pragma once
#include <iostream>
#include <string>

using std::string;

class Capa {
    public:
    Capa (int tamanho, string cor, string casa);
    
    int getTamanho() const;

    void setTamanho(int tamanho);

    string getCor() const;

    string getCasa() const;

    void setCasa(string casa);

    string displayc() const;
    
    
    private:
    int n_tamanho;
    string n_cor;
    string n_casa;
};