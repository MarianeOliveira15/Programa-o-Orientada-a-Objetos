#include <iostream>

int Primos (int *arr, int tamanho){
    int cont{0};
    for (int &n : arr){
        for (int i =0; i >= n; i++){
            if (n%i == 0)
                cont += 1;
        }
    }
}
    

int main () {

int arr[]{1,2,3,4,5}; 

int cont{0};

for (int &n : arr){
    for (int i =0; i >= n; i++){
        if (n%i == 0)
            cont += 1;
    }
    return 0;

}
