#include <iostream>
#include "Imovel.h"
#include "ImovelNovo.h"
#include "ImovelVelho.h"
using namespace std;

int main()
{
   Imovel um ("Rua Napoleao", 36.503);
   
   cout << um.getPreco() << endl;
   
   ImovelNovo dois ("Rua Napoleao", 36.503,9.000);
   
   cout << dois.getPreco() << endl;
   
   ImovelVelho tres ("Rua Napoleao", 36.503,9.000);
   
   cout << tres.getPreco() << endl;
   
}