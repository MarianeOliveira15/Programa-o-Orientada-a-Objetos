#include <iostream>

void swap (int &n1, int &n2){
    int aux{n1};
    
    n1 = n2;
    n2 = aux;
}

int main() {
  
  
 int n1{10},n2{5};
  
 swap(n1,n2);
  
  std::cout << n1 << n2;

    return 0;
}