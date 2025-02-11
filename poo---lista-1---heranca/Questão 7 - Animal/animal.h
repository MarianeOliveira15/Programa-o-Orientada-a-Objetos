#pragma once

#include <iostream>
#include <string>
using std::string;

class Animal {
    public:
    
    Animal(string nome, string raca);
    
    string getnome() {return nome;}
    
    string getraca() {return raca;}
    
    string caminha ();
    
    private:
    string nome;
    string raca;
    
};
