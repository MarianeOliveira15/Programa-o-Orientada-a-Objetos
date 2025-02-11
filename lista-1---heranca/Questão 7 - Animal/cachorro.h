#pragma once

#include <iostream>
#include <format>

#include "animal.h"
#include <string>
using std::format, std::string;

class Cachorro :public Animal {
    public:
    
    Cachorro (string nome, string raca);
    
    string late (){return format("O Cachorro {} da raca {}. Esta latindo!!", getnome(), getraca());}
};