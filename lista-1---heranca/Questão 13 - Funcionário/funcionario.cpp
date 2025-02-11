#include <iostream>
#include <string>
#include "funcionario.h"

using namespace std;

Funcionario :: Funcionario (string nome,string cpf, string matricula, double salario, int cargaMensal, int horasTraba ) : 
    PessoaFisica(nome,cpf), matricula(matricula), salario(salario), cargaMensal(cargaMensal), horasTraba(horasTraba){}
    
        ostream& operator <<(ostream& os, const Funcionario &obj){
        os << "*Funcinario:*" << endl;
        os << "Nome:" << obj.nome <<endl;
        os << "CPF:" << obj.cpf <<endl;
        os << "Matricula:" << obj.matricula <<endl;
        os << "Salario:" << obj.salario <<endl;
        os << "Carga Horaria Mensal:" << obj.cargaMensal <<endl;
        os << "Carga Horaria Semanal:" << obj.horasTraba <<endl;
        os << "Salario Calculado:" << obj.calculaSalarioBruto() <<endl;
        return os;
    }
    
    
  void  Funcionario:: setHorasTrabalhadas(int novasHorasTrabalhadas) {
        if (novasHorasTrabalhadas >= 0 && novasHorasTrabalhadas <= cargaMensal) {
            horasTraba = novasHorasTrabalhadas;
        } else {
            cerr << "Erro: Horas trabalhadas devem estar entre 0 e " << cargaMensal << "." << endl;
        }
    }
    
 double  Funcionario:: calculaSalarioBruto() const {
        return salario * static_cast<double>(horasTraba) / cargaMensal;
    }



