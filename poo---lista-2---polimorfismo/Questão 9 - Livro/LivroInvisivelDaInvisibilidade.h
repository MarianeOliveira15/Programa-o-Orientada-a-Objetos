#pragma once 
#include <iostream>
#include "livro.h"

#include <string>

using namespace std;

class Invisivel : public Livro{
    public:
    
    Invisivel (string titulo, int ano, int numero, string conteudo);
    
    //sobreecrevendo 
    string ler () override;
};