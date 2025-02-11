#include <iostream>
#include <string>
#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa (string nome) : nome(nome){}

std::ostream& operator<<(std::ostream& os, const Pessoa& obj) {
    os << "Nome: " << obj.nome << endl;
    return os;
}