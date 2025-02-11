#include <iostream>
using std::cout, std::endl;

#include "Time.h"

int main() {
	Time t(16,40,23);

	cout << "Objeto t: ";
	cout << t.toUniversal() << endl;

	Time outroTime;

	cout << "Objeto outroTime criado: ";
	cout << outroTime.toUniversal() << endl;

	outroTime = t;  //cada atributo de t C) copiado para o respectivo atributo de outroTime

	cout << "Objeto outroTime pC3s atribuiC'C#o: ";
	cout << outroTime.toUniversal() << endl;

	outroTime.setTime(13,0,0);

	cout << "Objeto outroTime pC3s setTime 13 0 0: ";
	cout << outroTime.toUniversal() << endl;

	cout << "Objeto t original: ";
	cout << t.toUniversal() << endl;
	
	
	Time t1(23, 59, 59);
	
	cout << t1.toUniversal() << endl;
	
	t1.tick();
	
	std::cout << "Depois do tick: ";
	cout << t1.toUniversal() << endl;
	
	
	Time t2(11, 50, 59);
	
	cout << t2.toUniversal() << endl;
	
	t2.tick();
	
	std::cout << "Depois do tick: ";
	cout << t2.toUniversal() << endl;
	
	
	Time t3(11, 59, 59);
	
	cout << t3.toUniversal() << endl;
	
	t3.tick();
	
	std::cout << "Depois do tick: ";
	cout << t3.toUniversal() << endl;
	
	return 0;
}
