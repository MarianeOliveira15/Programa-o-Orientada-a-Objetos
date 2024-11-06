#include <iostream>
#include <string>
#include <cctype>

bool Maiuscula(const std::string& str) {
    int cont = 0;     // se não hover maisculas 
    for (char c : str) {
        if (std::isupper(c) != 0) {  // se houver maisculas sera diferente de 0
            cont = 1;                // cont agora é 1, true 
        }
    }
    return cont;
}

int main() {
    std::string texto;
    std::cout << "Digite uma string: ";
    std::getline(std::cin, texto);

    std::cout << Maiuscula(texto);

    return 0;
}