#include "capa.h"
#include <iostream>

using std::cout, std::endl;

int main(){
    Capa c1{32,"Verde","Grifinória"};
    
    cout << c1.display() << endl;

    return 0;
}