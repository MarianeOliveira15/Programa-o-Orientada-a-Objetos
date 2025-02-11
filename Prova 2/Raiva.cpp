
#include <iostream>
#include "Raiva.h"
#include <string>
using namespace std;

Raiva::Raiva (string nome, bool estado = false) : Emocao (nome, estado) {}


void Raiva::Raiva (string descricao){
    // inverte o estado da emoção toda vez que a quantidade de vogais for ímpar.
    cont = 0; 
    while (descricao){
        i = 0;
        if (descricao[i] == "a"|| "e"|| "i"|| "o"|| "u")
        cont ++; 
    };
    
    
    if (cont%2 != 0){
        if (estado == "false"){
            setEstado(true);
        }
        else{
            setEstado(false);
        }
    }
};