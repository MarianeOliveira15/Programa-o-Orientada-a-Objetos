#include <iostream>
using namespace std;

int main() {
    double litros, quilometragem;
    double totalLitros = 0.0;
    
    while (true) {
        cout << "Digite a quilometragem desde o último abastecimento: ";
        cin >> quilometragem;
        
        if (quilometragem == -1) {
            break; // Encerra o loop
        }

        cout << "Digite a quantidade de litros abastecidos: ";
        cin >> litros;

        if (litros > 0) {
            double consumo = quilometragem / litros;
            cout << "Consumo para este tanque: " << consumo << " km/l" << endl;
            totalLitros += litros;
        } else {
            cout << "Quantidade de litros deve ser maior que zero." << endl;

        }
        cout << "Total de litros consumidos: " << totalLitros << " litros" << endl;
    }
    
        

    return 0;
}