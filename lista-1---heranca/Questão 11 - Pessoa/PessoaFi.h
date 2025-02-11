#pragma once
#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

class PessoaFisica : public Pessoa {
    friend ostream& operator<<(ostream&, const PessoaFisica&);
    
    public:
    PessoaFisica (string nome , string cpf);
    
    string getCpf () {return cpf;}
    
    protected:
    string cpf;
};