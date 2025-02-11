#include <iostream>
#include <string>
#include "emocao.h"
#include "Alegria.h"
#include "Tristeza.h"
#include "Raiva.h"
#include "riley.h"

int main() {  
  Riley riley;

  riley << Alegria("Alegria");
  riley << Raiva("Raiva");
  riley << Tristeza("Tristeza");

  riley.processar("Brincando no parquinho.");
  riley.processar("Viagem para Disney.");
  riley.processar("Primeiro encontro.");
  riley.processar("Uma noite no museu.");
  riley.processar("O dia em que quebrou um osso.");

  std::cout << riley << std::endl;
 
  return 0;  
}