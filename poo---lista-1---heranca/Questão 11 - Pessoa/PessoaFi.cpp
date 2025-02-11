
#include <iostream>
#include <string>
#include "PessoaFi.h"

using namespace std;

PessoaFisica :: PessoaFisica (string nome,string cpf) : Pessoa(nome) , cpf(cpf) {}

ostream& operator<<(ostream& os, const PessoaFisica& obj) {
    os << " * Pessoa Fisica: * " << endl;
    os << "Nome: " << obj.nome << endl;
    os << "CPF: " << obj.cpf<< endl;  
    return os;
}