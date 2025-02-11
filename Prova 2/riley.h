#pragma once
#include <iostream>
#include "emocao.h"
#include <string>
using namespace std;


class Riley : public Emocao{
    
    Riley & Riley operator << (Emocao * emocao); 
    
    void processar (string descricao) override;
}