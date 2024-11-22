#include "Empregado.hpp"

Empregado::Empregado(string nome, string sobrenome, double salario){
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);
}

string Empregado::getNome() const{
    return n_nome;
}

void Empregado::setNome(string nome){
    n_nome = (nome.empty() ? "\"Sem nome\"" : nome);
}

string Empregado::getSobrenome() const{
    return n_sobrenome;
}

void Empregado::setSobrenome(string sobrenome){
    n_sobrenome = (sobrenome.empty() ? "\"Sem sobrenome\"" : sobrenome);
}

double Empregado::getSalario() const{
     return n_salario;
}

void Empregado::setSalario(double salario){
     if (salario < 0){
        n_salario = 0;
     } else{
         n_salario = salario; 
     }
} 