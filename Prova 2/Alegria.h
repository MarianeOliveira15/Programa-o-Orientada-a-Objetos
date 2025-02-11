#pragma once
#include <iostream>
#include "emocao.h"
#include <string>
using namespace std;


class Alegria : public Emocao {
    public:
    
    Alegria (string nome, bool estado = false) : Emocao (nome, estado){}
    
    void processar (string descricao) override;
};