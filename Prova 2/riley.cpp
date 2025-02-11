#pragma once
#include <iostream>
#include "emocao.h"
#include <string>
using namespace std;

Riley :: Riley (string nome, bool estado = false) : Emocao (nome, estado) {}


Riley operator << (Emocao * emocao) {} 


void processar (string descricao){
    
}

