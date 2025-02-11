#include "Imovel.h"
#include <iostream>
#include <string>
using namespace std;

Imovel::Imovel (string endereco, double preco) : endereco(endereco), preco(preco){
}

double Imovel :: getPreco (){
    return preco;
}