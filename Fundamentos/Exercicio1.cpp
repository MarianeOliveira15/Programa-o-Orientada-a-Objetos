#include <iostream>
#include <string>


int main() {
    
    //using std::string, std::cout, std::cin, std::endl;
    
    std::string nome{};
    double n1{},n2{},n3{};
    std::cin >> nome;
    
    std::cin >> n1 >> n2 >> n3;
    
    double media = (n1*3 + n2*4 + n3*5)/3;
    
    std::cout << "O aluno " << " obteve média " << media << std::endl;

    return 0;
}