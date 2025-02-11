#pragma once 
#include <iostream>
#include <string>
#include "livro.h"

using namespace std;

class LivroMonstruosoDosMonstros : public Livro {
    public:
    
    LivroMonstruosoDosMonstros (string titulo, int ano, int numero, string conteudo);

    //sobreecrevendo 
    string ler () override;

};