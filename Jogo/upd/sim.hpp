#ifndef SIM_H
#define SIM_H

#include "ASCII_Engine/ObjetoDeJogo.hpp"
#include <string>
#include <vector>

class Sim : public ObjetoDeJogo {
public:
    Sim(const ObjetoDeJogo &obj, int life = 100) : ObjetoDeJogo(obj), life(life) {}

    virtual void falar() = 0;

    virtual ~Sim() = default;

    // Métodos para manipular a vida
	bool isAlive() const { return life != 0; }
	int getLife() const { return life; }

private:
    int life;
};

#endif // SIM_H