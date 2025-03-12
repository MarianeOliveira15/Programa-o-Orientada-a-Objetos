#include <iostream>
#include <string>
using std::cout;

#include "Bruxo.hpp"

int main()
{
    Bruxo um{"Maria", "Grifinória", "Congelar"};
    //Empregado dois{"Felipe", "Rodrigues", -1.400};
    /*
	cout << format("O(A) Bruxo(a) {} da casa {} \n", 
	um.getNome(),
	um.getCasa());
	*/
	um.lancarFeitico();
	
	um.display();
	
    return 0;
}