#include <iostream>
#include <string>
#include "ImovelNovo.h"
using namespace std;

ImovelNovo :: ImovelNovo (string endereco, double preco, double adPreco) : Imovel(endereco,preco) , adPreco(adPreco){}

double ImovelNovo :: getPreco() { 
    return (adPreco + preco); 
}

