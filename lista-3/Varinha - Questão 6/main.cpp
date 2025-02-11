#include <format>
#include <string>
#include "varinha.h"
using std::format, std::string, std::cout, std::endl;


int main() {
    
    Varinha v1 {"Carvalho", "fada", 12.5};
    
    cout << v1.display() << endl;
    
    return 0;
}