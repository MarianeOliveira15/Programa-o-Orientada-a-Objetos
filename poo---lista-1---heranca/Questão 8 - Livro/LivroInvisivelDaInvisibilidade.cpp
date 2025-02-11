#include <iostream>
#include <string>
#include "LivroInvisivelDaInvisibilidade.h"
#include <format>


using namespace std;

Invisivel::Invisivel (string titulo, int ano, int numero, string conteudo) : 
    Livro (titulo,ano,numero,conteudo) {}

string Invisivel:: ler (){
     return format("");
}

