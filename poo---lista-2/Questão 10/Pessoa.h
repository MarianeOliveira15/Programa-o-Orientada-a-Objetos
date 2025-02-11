#pragma once

#include <string>
using std::cout, std::endl, std::string;
class Pessoa {
    public:
    
    Pessoa(string pessoa = "sem nome", string cpf = "sem", string valido = "Invalido");
    
    void setPessoa (string pessoa);
    
    void setCPF (string cpf);
    
    string getPessoa() const;
    
    string getCPF() const;
    
    void setCpfValido(string cpfValido);
    
    string apresentar();
    
    string getCpfValido();

    
    private:
    string n_nome;
    string n_cpf;
    string n_valido;
};