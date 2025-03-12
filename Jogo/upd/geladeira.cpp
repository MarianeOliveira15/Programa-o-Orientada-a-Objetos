#include "geladeira.hpp"

Geladeira::Geladeira(const ObjetoDeJogo &obj) : ObjetoDeJogo(obj) {
}

void Geladeira::adicionarComida(const std::string& comida) {
    comidas.push_back(comida);
}

bool Geladeira::removerComida(const std::string& nome) {
    for (auto it = comidas.begin(); it != comidas.end(); ++it) {
        if (*it == nome) {
            comidas.erase(it);
            cout << "Comida removida da geladeira: " << nome << endl;
            return true; // Retorna true se a comida foi removida
        }
    }
   	cout << "Comida não encontrada na geladeira: " << nome << endl;
    return false;
}

void Geladeira::listarComidas() const {
    if (comidas.empty()) {
        cout << "A geladeira está vazia." << endl;
        return;
    }

    cout << "Comidas na geladeira:" << endl;
    for (const auto& comida : comidas) {
        cout << "- " << comida << endl;
    }
}