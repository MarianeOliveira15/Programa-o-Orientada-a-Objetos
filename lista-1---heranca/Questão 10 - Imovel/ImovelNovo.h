#pragma once 
#include <iostream>
#include <string>
#include "Imovel.h"
using namespace std;

class ImovelNovo : public Imovel {
    public: 
    
    ImovelNovo (string endereco, double preco, double adPreco);
    
    double getAdPreco (){return adPreco;}
    
    double getPreco();
    
    private: 
    double adPreco;
};