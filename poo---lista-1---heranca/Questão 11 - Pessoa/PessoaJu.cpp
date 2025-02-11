
#include <iostream>
#include <string>
#include "PessoaJu.h"

using namespace std;

PessoaJuridica :: PessoaJuridica (string nome, string cnpj, string social, string fantasia) : 
    Pessoa(nome), cnpj(cnpj), social(social), fantasia(fantasia) {}

ostream& operator<<(ostream& os, const PessoaJuridica& obj) {
    os << " * Pessoa Juridica: * " << endl;
    os << "Nome: " << obj.nome << endl;
    os << "CNPJ: " << obj.cnpj<< endl; 
    os << "Razão social: " << obj.social<< endl; 
    os << "Nome fantasia: " << obj.fantasia<< endl;  
    return os;
}