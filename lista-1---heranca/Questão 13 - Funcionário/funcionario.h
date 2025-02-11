#pragma once
#include <iostream>
#include <string>
#include "PessoaFi.h"

using namespace std;

class Funcionario : public PessoaFisica{
    friend ostream& operator <<(ostream&, const Funcionario&);
    
    public:
    Funcionario (string nome, string cpf, string matricula, double salario, int cargaMensal, int horasTraba);
    
    string getMatricula() const { return matricula; }
    double getSalarioBase() const { return salario; }
    int getCargaHorariaMensal() const { return cargaMensal; }
    int getHorasTrabalhadas() const { return horasTraba; }

    void setCargaHorariaMensal(int novaCargaHoraria) { cargaMensal = novaCargaHoraria; }

    void setHorasTrabalhadas(int novasHorasTrabalhadas);

    double calculaSalarioBruto() const;
    
    private:
    string matricula; 
    double salario;
    int cargaMensal; 
    int horasTraba;
    
};
