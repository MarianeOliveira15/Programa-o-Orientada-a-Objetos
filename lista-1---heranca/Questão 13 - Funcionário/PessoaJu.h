#pragma once
#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

class PessoaJuridica : public Pessoa {
    public:
    PessoaJuridica (string nome, string cnpj, string social) ;
    
    string getCnpj () {return cnpj;}
    
    string getSocial () {return social;}
    
    private:
    string cnpj;
    string social;
};