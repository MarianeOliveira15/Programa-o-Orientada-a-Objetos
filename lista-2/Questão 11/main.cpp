#include <iostream>
#include "retangulo.h"
#include <format>

using std::cout, std::format;

int main()
{
    Retangulo um{10,9};
    cout<<format ("O retangulo de altura {} e largura {}. Tem perimentro de {} e area de {}\n",
    um.getAltura(), um.getLargura(), um.perimetro(), um.area());
    
    Retangulo dois{};
    
    cout<<format ("O retangulo de altura {} e largura {}. Tem perimentro de {} e area de {}\n",
    dois.getAltura(), dois.getLargura(), dois.perimetro(), dois.area());

    return 0;
}