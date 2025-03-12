#ifndef HEROI_H
#define HEROI_H

using namespace std;

#include "sim.hpp"
#include "geladeira.hpp"
#include <vector>
#include <string>
#include <iostream>

class Hero : public Sim {
    public:
     Hero(const ObjetoDeJogo &obj, int life = 100) : Sim(obj, life) , dormir(dormir) {}

    void falar() override;
    void Hero::addComida(const string& comida);
    void adicionarComidaBalcao();
    void addComidaGela(Geladeira& geladeira);
    void pegarComidaGeladeira(Geladeira& geladeira, const string& comida) ;
    void listarComidas();

    void dorme() { dormir = true; }
    bool seDormiu() const { return dormir; }

    private:
    vector<std::string> comidas; // Lista de comidas do herói
    bool dormir; 
};

#endif // HEROI_H