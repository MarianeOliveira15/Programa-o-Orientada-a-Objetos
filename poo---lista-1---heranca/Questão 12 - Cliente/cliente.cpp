#include <iostream>
#include <string>
#include "cliente.h"

using namespace std;

    Cliente :: Cliente (string nome , string cpf, string endereco, long int telefone) : 
    PessoaFisica(nome,cpf), endereco(endereco), telefone(telefone){} 
    
    std::ostream& operator<<(std::ostream& os, const Cliente& obj) {
    os << " * Cliente: * " << endl;
    os << "Nome: " << obj.nome << endl;
    os << "CPF: " << obj.cpf << endl;
    os << "Endereço: " << obj.endereco << endl;
    os << "Telefone: " << obj.telefone << endl;
    return os;
    }