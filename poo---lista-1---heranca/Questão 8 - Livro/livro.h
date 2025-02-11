#pragma once 
#include <iostream>
#include <string>

using namespace std;

class Livro{
    public:
    
    Livro (string titulo, int ano, int numero, string conteudo);
    
    string getTitulo () {return titulo;}
    
    int getAno () {return ano;}

    int getNumero () {return numero;}
    
    string getConteudo () {return conteudo;}

    string ler ();
    
    private:
    string titulo;
    int ano;
    int numero;
    string conteudo;
};