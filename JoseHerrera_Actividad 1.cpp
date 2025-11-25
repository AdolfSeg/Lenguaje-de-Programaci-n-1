/******************************************************************************
Nombre del programa: Mayor de edad
Autor: José Adolfo Herrera Segura
Fecha: 23 de Noviembre de 2025
*******************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int edad;
    string nombre;
    
    cout << "Ingrese su nombre: ";
    cin >> nombre;
    cout << "Bienvenido " << nombre << "\nDigite su edad" << endl;
    
    cin >> edad;
    if (edad>=18) {
        cout << "Usted es mayor de edad." << endl;
    } else {
        cout << "Usted es menor de edad." << endl;
    }
    return 0;
}