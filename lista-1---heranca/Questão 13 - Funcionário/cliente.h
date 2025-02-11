#pragma once
#include <iostream>
#include <string>
#include "PessoaFi.h"

using namespace std;

class Cliente : public PessoaFisica {
    public:
    
    Cliente (string nome , string cpf, string endereco, int telefone);
    
    string getEndereco () {return endereco;}
    
    int getTelefone () {return telefone;}
    
    private:
    string endereco;
    int telefone; 

};

