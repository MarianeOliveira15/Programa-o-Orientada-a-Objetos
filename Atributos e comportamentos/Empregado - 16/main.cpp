#include <iostream>
#include <string>
#include <format>
using std::cout, std::format;


#include "Empregado.hpp"



int main()
{
    Empregado um{"Maria", "Rodrigues", 1.400};
    Empregado dois{"Felipe", "Rodrigues", -1.400};
    
	cout << format("O(A) empregado(a) {} {} recebe o salario de valor de {}\n", 
	um.getNome(),
	um.getSobrenome(),
	um.getSalario());
	
	
	um.setSalario(1.540);
	
	cout << format("O(A) empregado(a) {} {} recebe o salario de valor de {}\n", 
	um.getNome(),
	um.getSobrenome(),
	um.getSalario());

    return 0;
}