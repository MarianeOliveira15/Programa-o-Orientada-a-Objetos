#include <iostream>

int sequencia() {
    static int valor = 0; 
    return valor++;
}

int main() {
    for (int i = 0; i < 10; ++i) {
        std::cout << sequencia() << " ";
    }
    return 0;
}