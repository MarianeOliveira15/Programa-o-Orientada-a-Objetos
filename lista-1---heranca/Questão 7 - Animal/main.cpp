#include <stdio.h>
#include "animal.h"
#include "cachorro.h"
#include "gato.h"

#include <string>
using std::string, std::cout, std::endl;

int main()
{
    Animal f ("kiu" , "ii");
    
    cout<<f.caminha() << endl;

    Gato g1 ("Mar", "ugh");
    
    Cachorro c1 ("Gui", "jjk");
    
    cout<<g1.mia()<<endl;
    
    cout<<c1.late()<<endl;

    return 0;
}