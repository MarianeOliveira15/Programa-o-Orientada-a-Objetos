#pragma once 
#include <iostream>
#include <string>
using namespace std;

class Imovel {
    public:
    
    Imovel (string endereco, double preco);
    
    string getEndereco (){return endereco;}
    
    double getPreco();
    
    protected:
    string endereco;
    double preco;
};






