#include <iostream>
#include <format>
#include <string>
#include "livro.h"

using namespace std;


Livro::Livro (string titulo, int ano, int numero, string conteudo) : titulo(titulo), ano(ano), numero(numero), conteudo(conteudo)  {}

string Livro :: ler (){
    return format("O livro {} de ano {}, tem {} paginas e apresenta conteudo {}\n\n",
    getTitulo(), getAno(), getNumero(), getConteudo());
} 