#pragma once
#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

class PessoaJuridica : public Pessoa {
    friend ostream& operator<<(ostream& , const PessoaJuridica&);
    
    public:
    PessoaJuridica (string nome, string cnpj, string social, string fantasia) ;
    
    string getCnpj () {return cnpj;}
    
    string getSocial () {return social;}
    
    string getFantasia () {return fantasia;}
    
    
    private:
    string cnpj;
    string social;
    string fantasia;
};