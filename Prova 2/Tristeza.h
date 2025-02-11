#pragma once
#include <iostream>
#include "Tristeza.h"
#include <string>
using namespace std;


class Tristeza : public Emocao {
    public:
    
    Tristeza  (string nome, bool estado = false) : Emocao (nome, estado){}
    
    void processar (string descricao) override;
};