#pragma once

#include <iostream>
#include <array>

class Mala{
public:
    Mala();
    std::array getLivros() const;
    void guardarLivro(Livro livro);
    void display() const;

private:
    int m_posicao{0};
    std::array <Livro, 12> m_livros;
};