
#include <iostream>
#include <string>
#include "PessoaJu.h"

using namespace std;

PessoaJuridica :: PessoaJuridica (string nome, string cnpj, string social) : Pessoa(nome) , cnpj(cnpj), social(social) {}