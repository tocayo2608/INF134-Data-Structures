#include <iostream>

using namespace std;

int main(){
    int * variable_puntero;
    variable_puntero = new int[5];
    variable_puntero[1] = 5;
    cout << variable_puntero[1];
}