#include "heroi.hpp"
using namespace std;

Hero::Hero(const ObjetoDeJogo &obj, int life = 100) : Sim(obj, life) {} 

void Hero::falar() {
    cout << "Heroi diz: Eu sou o herói! Minha vida é " << getLife() << "." << endl;
}

// adiciona uma comida na lista do herói
void Hero::addComida(const string& comida) {
    comidas.push_back(comida);
    cout << "Heroi adicionou comida: " << comida << endl;
}

// Adiciona comidas do herói na geladeira, quando o sim chega do supermercado com as compras
void Hero::addComidaGela(Geladeira& geladeira) {
    if (!comidas.empty()) { // se ha comidas na lista
        cout << "O herói está transferindo todas as comidas para a geladeira..." << std::endl;
        for (const auto& comida : comidas) {
            geladeira.adicionarComida(comida); // adiciona cada comida na geladeira
        }
        comidas.clear(); // limpa a lista de comidas do herói
    } else {
        cout << "O herói não tem comidas para adicionar na geladeira." << endl;
    }
}

//pegar as comidas na geladeira 
void Hero::pegarComidaGeladeira(Geladeira& geladeira, const string& comida) {
    string nomeComida = comida;

    // Se o nome da comida não for fornecido, solicita ao usuário
    if (nomeComida.empty()) {
        cout << "Digite o nome da comida que deseja pegar da geladeira: ";
        getline(cin, nomeComida);
    }

    if (!nomeComida.empty()) {
        if (geladeira.removerComida(nomeComida)) {
            comidas.push_back(nomeComida);
            cout << "Heroi pegou a comida da geladeira: " << nomeComida << endl;
        } else {
            cout << "A comida " << nomeComida << " não está na geladeira." << endl;
        }
    } else {
        cout << "Nenhuma comida foi digitada." << endl;
    }
}

// adicionar comidas à lista do herói via teclado, utilizar com Balcao no supermercado
void Hero::adicionarComidaBalcao() {
    string comida;
    cout << "Digite o nome da comida (ou 'sair' para terminar): ";
    while (getline(cin, comida)) {
        if (comida == "sair") {
            break; // Sai do loop se o usuário digitar 'sair'
        }
        if (!comida.empty()) {
            addComida(comida); // Adiciona a comida à lista do herói
        }
        cout << "Digite o nome da próxima comida (ou 'sair' para terminar): ";
    }
}

void Hero::listarComidas() {
    if (comidas.empty()) {
        return;
    }

    cout << "Comidas do Heroi:" << endl;
    for (const auto& comida : comidas) {
        cout << "- " << comida << endl;
    }
}