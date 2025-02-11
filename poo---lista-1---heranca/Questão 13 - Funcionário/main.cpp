#include <iostream>
#include <string>
#include "Pessoa.h"
#include "PessoaFi.h"
#include "funcionario.h"
using namespace std;

int main()
{
    Pessoa um ("Thais");

    Funcionario dois ("Maria","15688748525","1397",1935.02,2400,60);
    
    cout << dois<<endl;
    
    dois.setHorasTrabalhadas(3000);
    
    
}