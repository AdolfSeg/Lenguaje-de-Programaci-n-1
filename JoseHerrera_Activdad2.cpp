/******************************************************************************

Nombre de la Actividad: Suma, Resta, Multiplicación y Divición.
Autor: José Adolfo Herrera Segura.
Fecha Elaboración: 27 de Noviembre de 2025.

*******************************************************************************/
#include <iostream>
using namespace std;

void datos(float &valor1, float &valor2){
    cout << "\nDigite el primer valor: ";
    cin >> valor1;
    cout << "Digite el segundo valor: ";
    cin >> valor2;
}

int main(){
    
    int selector;
    float valor1, valor2;
    
    cout << "Bienvenido a la calculadora básica.";
    
    do{
        cout << "\n---------------------------------------";
        cout << "\nSeleccione la Operación a Realizar.";
        cout << "\n\n1. Suma";
        cout << "\n2. Resta";
        cout << "\n3. Multiplicación";
        cout << "\n4. Divición ";
        cout << "\n5. SALIR";
        cout << "\n---------------------------------------\n";
        cout << "Opción: ";
        
        cin >> selector;
        
        if (selector == 1){
            cout << "Suma";
            datos(valor1, valor2);
            float suma = valor1 + valor2;
            cout << "La suma es: " << suma << endl;
        }
         else if (selector == 2){
            cout << "Resta";
            datos(valor1, valor2);
            float resta = valor1 - valor2;
            cout << "La resta es: " << resta << endl;
        }
        else if (selector == 3){
            cout << "Multiplicación";
            datos(valor1, valor2);
            float multiplicacion = valor1 * valor2;
            cout << "La multiplicación es: " << multiplicacion << endl;
        }
        else if (selector == 4){
            cout << "Divición";
            datos(valor1, valor2);
            float divicion = valor1 / valor2;
            cout << "La divición es: " << divicion << endl;
        }
        else if (selector == 5){
            cout << "Saliendo del sistema..." << endl;
        }
    } while (selector != 5);
    
    
    return 0;
}