#include <iostream>
#include <format>

#include "animal.h"
#include "gato.h"

#include <string>
using std::format, std::string;

Gato::Gato (string nome, string raca) : Animal(nome,raca){}