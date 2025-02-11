#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pessoa {
    friend ostream& operator<<(ostream& , const Pessoa&);
    
    public:
    
    Pessoa (string nome);
    
    string getNome () {return nome;}
    
    protected:
    string nome; 
};  