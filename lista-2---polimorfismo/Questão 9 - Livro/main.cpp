#include <iostream>
#include "LivroMonstruosoDosMonstros.h"
#include "LivroInvisivelDaInvisibilidade.h"

using namespace std;

int main()
{
    Livro um ("Rainha", 2025, 366, "Misterio");
    
    Livro *l(nullptr); 
    
    l = &um;
    
    cout<<um.ler();
    
    LivroMonstruosoDosMonstros dois ("Rainha", 2025, 366, "Misterio");
    
    l = &dois;
    
    cout<<l->ler();

    Invisivel tres ("Rainha", 2025, 366, "Misterio");
    
    l = &tres;

    cout<<l->ler();
    
    return 0;
}