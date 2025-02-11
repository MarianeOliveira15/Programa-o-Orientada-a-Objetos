#pragma once
#include <iostream>
#include "emocao.h"
#include <string>
using namespace std;


class Raiva : public Emocao {
    public:
    
    Raiva  (string nome, bool estado = false) : Emocao (nome, estado){}
    
    void processar (string descricao) override;
};