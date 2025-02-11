#include <iostream>
#include <string>
#include "ImovelVelho.h"
using namespace std;


ImovelVelho :: ImovelVelho (string endereco, double preco, double desPreco) : Imovel(endereco,preco) , desPreco(desPreco){}

double ImovelVelho :: getPreco() { 
    return (preco - desPreco); 
}
