#include <iostream>

int main() {
    // Primeiro 
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // Segundo 
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < i; j++) {
            std::cout << ' ';
        }
        for (int k = 5 - i; k > 0; k--) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // Terceiro 
    for (int i = 1; i <= 3; i++) {
        for (int j = 3; j > i; j--) {
            std::cout << ' ';
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
    for (int i = 2; i >= 1; i--) {
        for (int j = 3; j > i; j--) {
            std::cout << ' ';
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    // Quarto 
    for (int i = 1; i <= 4; i++) {
        for (int j = 4; j > i; j--) {
            std::cout << ' ';
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }

    return 0;
}
