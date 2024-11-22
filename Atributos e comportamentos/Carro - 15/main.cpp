#include <iostream>
#include <string>
#include <format>

#include "Carro.hpp"

using std::cout, std::format;

int main() {
	Carro possante{"Renault", "Duster", 20};
	
	cout << format("O meu possante eh um {} {} de ano {}\n", 
		possante.getMarca(),
		possante.getModelo(),
		possante.getAno());
	
	return 0;
}
