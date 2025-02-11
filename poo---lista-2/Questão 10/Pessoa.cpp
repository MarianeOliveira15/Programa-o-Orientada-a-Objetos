#include <iostream>
#include <format>
#include "Pessoa.h"
using std::cout, std::endl, std::format;

Pessoa::Pessoa(string pessoa , string cpf, string valido ) {
    setPessoa(pessoa);
    setCPF(cpf);
    setCpfValido(valido);
}

void Pessoa::setPessoa (string pessoa) {
    n_nome = pessoa;
}

void Pessoa:: setCPF(string cpf){
    n_cpf = cpf;
}

string Pessoa:: getPessoa() const{
    return n_nome;
}

string Pessoa:: getCPF() const{
    return n_cpf;
}

void Pessoa:: setCpfValido(string cpfValido){
    n_valido = cpfValido;
}

string Pessoa:: getCpfValido(){
    return n_valido;
}

string Pessoa::apresentar(){
	return (format("A Pessoa {} do CPF {} esta em situação {} \n", getPessoa(),getCPF(), getCpfValido()));
}

