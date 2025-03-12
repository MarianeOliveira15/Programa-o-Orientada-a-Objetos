#ifndef NPC_H
#define NPC_H

#include "sim.hpp"
#include <iostream>

class Npc : public Sim {
public:

    Npc(const ObjetoDeJogo &obj, int life = 100) : Sim(obj, life) {}

    void falar() override {
        std::cout << "Npc diz: Olá, eu sou um NPC! Minha vida é " << getLife() << "." << std::endl;
    }
};

#endif // NPC_H