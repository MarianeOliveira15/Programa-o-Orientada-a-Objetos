#include <iostream>
#include "Alegria.h"
#include <string>
using namespace std;

Alegria::Alegria (string nome, bool estado = false) : Emocao (nome, estado) {}


void Alegria::processar (string descricao){
    // ativa a emoção toda vez que a quantidade de caracteres for par.
    
    cont = 0; 
    while (descricao){
        i = 0;
        descricao[i];
        cont ++; 
    };
    
    
    if (cont%2 == 0){
        setEstado(true);
    };
};