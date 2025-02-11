#include <iostream>
#include <format>
#include "animal.h"
#include <string>
using std::format, std::string;


Animal::Animal(string nome, string raca) : nome(nome),raca(raca){}

string Animal::caminha (){
    return format("O animal {} de raca {} caminha \n", getnome(), getraca() ); 
}