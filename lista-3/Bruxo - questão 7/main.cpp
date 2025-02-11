#include "Bruxo.h"
#include "capa.h"
#include "varinha.h"
#include <iostream>

int main()
{
     Bruxo um{"Maria", "Grifinória", "Congelar"};
     Capa c1{32,"Verde","Grifinória"};
     Varinha v1 {"Carvalho", "fada", 12.5};
     
    um.setVarinha(&v1);
    um.setCapa(&c1);
    
    um.display();
    
    

    return 0;
}