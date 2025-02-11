#include <iostream>
#include <array>
#include "Mala.hpp"

std::array Mala::getLivros() const {
    return m_livros;
}
void Mala::guardarLivro(Livro livro) {
    if(m_posicao < 12){
        m_livros[m_posicao] = livro;
        m_posicao++;
    }
}
void Mala::display() const {
    std::cout << "Livros:" << std::endl;
    for(Livro i:m_livros)
        std::cout << i << std::endl;
};