#include <iostream>
#include <string>
#include "cliente.h"

using namespace std;

    Cliente :: Cliente (string nome , string cpf, string endereco, int telefone) : 
    PessoaFisica(nome,cpf), endereco(endereco), telefone(telefone){} 