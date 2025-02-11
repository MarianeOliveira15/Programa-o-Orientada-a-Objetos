#include <iostream>
#include <string>
#include "Pessoa.h"
#include "PessoaFi.h"
#include "PessoaJu.h"
using namespace std;

int main()
{
    Pessoa um ("Maria");
    
    cout<<um<<endl;
    
    PessoaFisica dois ("Natan", "563315632442");
    
    cout<<dois<<endl;
    
    PessoaJuridica tres ("Julia", "5845694462487", "Gourmtes", "Julia*l");
    cout<<tres<<endl;
    
}