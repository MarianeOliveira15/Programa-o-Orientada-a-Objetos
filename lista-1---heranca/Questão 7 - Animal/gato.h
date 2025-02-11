#pragma once

#include <iostream>
#include <format>

#include "animal.h"
#include <string>
using std::format, std::string;

class Gato :public Animal{
    public:
    
    
    Gato (string nome, string raca);

    string mia (){return format("O gato {} da raca {}. Esta miando!!", getnome(), getraca());}
    
};