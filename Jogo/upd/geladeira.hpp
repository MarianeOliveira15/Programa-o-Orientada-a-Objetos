#ifndef GELADEIRA_H
#define GELADEIRA_H

#include "ASCII_Engine/ObjetoDeJogo.hpp"

using namespace std;

#include <vector>
#include <string>
#include <iostream>

class Geladeira : public ObjetoDeJogo {
    public:
        Geladeira(const ObjetoDeJogo &obj) : ObjetoDeJogo(obj) {}
        virtual ~Geladeira(){}  

        void adicionarComida(const string& comida);
        bool removerComida(const string& nome);
        void listarComidas() const;

    private:
        std::vector<string> comidas; // Lista de comidas da geladeira
};

#endif // GELADEIRA_H