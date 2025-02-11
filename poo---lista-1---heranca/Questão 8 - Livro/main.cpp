#include <iostream>
#include "LivroMonstruosoDosMonstros.h"
#include "LivroInvisivelDaInvisibilidade.h"

using namespace std;

int main()
{
    Livro um ("Rainha", 2025, 366, "Misterio");
    
    cout<<um.ler();
    
    LivroMonstruosoDosMonstros dois ("Rainha", 2025, 366, "Misterio");
    
    cout<<dois.ler();

    Invisivel tres ("Rainha", 2025, 366, "Misterio");

    cout<<tres.ler();
    
    return 0;
}