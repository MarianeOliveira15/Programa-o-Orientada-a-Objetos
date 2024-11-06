#include <iostream>
#include <string>
#include <cctype>

void Minusculas(std::string &str) {
    for (char &c : str) {
        c = std::tolower(c);  // Converte o caractere para minúsculo
    }
}

int main() {
    std::string texto;
    std::cout << "Digite uma string: ";
    std::getline(std::cin, texto);

    Minusculas(texto);
    std::cout << texto << std::endl;

    return 0;
}
