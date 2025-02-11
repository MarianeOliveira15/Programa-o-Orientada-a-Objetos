#pragma once 
#include <iostream>
#include <string>
#include "Imovel.h"
using namespace std;

class ImovelVelho : public Imovel {
    public: 
    
    ImovelVelho (string endereco, double preco, double desPreco);
    
    double getDesPreco (){return desPreco;}
    
    double getPreco();
    
    private: 
    double desPreco;
};