#pragma once

#include <iostream>
#include <string>
using std::cout, std::endl, std::string;

class Varinha {
    public:
    Varinha (string madeira = " " ,string nucleo = " ", double comprimento = 0);
    
    void setMadeira(string madeira);
    
    void setNucleo(string nucleo);
    
    void setComprimento(double comprimento);

    string getMadeira () const;
        
    string getNucleo () const;
    
    double getComprimento () const;
    
        
    string display ();
    
    private:
        string n_madeira;
        string n_nucleo;
        double n_comprimento;
    
};
