#include <iostream>
#include <string>
#include <format>
using std::cout, std::endl;

#include "Pessoa.h"

int main()
{
    
    Pessoa pessoa1{"Maria", "55896369693", "Invalido"};
    cout << pessoa1.apresentar() << endl;

    
    Pessoa pessoa2{};
    cout << pessoa2.apresentar() << endl;
    
    return 0;
}