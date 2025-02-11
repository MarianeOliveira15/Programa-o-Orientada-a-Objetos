#include <iostream>
#include <string>
#include "LivroMonstruosoDosMonstros.h"
#include <format>

using namespace std;

LivroMonstruosoDosMonstros::LivroMonstruosoDosMonstros (string titulo, int ano, int numero, string conteudo) : 
    Livro (titulo,ano,numero,conteudo) {}

string LivroMonstruosoDosMonstros:: ler (){
     return format("Mastiga, mastiga, mastiga, mastiga…\n");
}

