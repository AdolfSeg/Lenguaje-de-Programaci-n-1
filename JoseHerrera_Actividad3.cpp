/******************************************************************************

Autor: José Adolfo Herrera Segura
Programa: Cálculo del RFC
Fecha: 30 de noviembre del 2025

*******************************************************************************/
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Diccionario de palabras NO PERMITIDAS
const vector < string > palabrasProhibidas = {
    "BUEI", "CACA", "CAGA", "CAKA", "COGE", "COJE", "COJO", "FETO", "JOTO",
    "KACO", "KAGO", "KOJO", "KULO", "MAMO", "MEAS", "MION", "MULA", "PEDO",
    "PUTA", "QULO", "RUIN", "BUEY", "CACO", "CAGO", "CAKO", "COJA", "COJI", 
    "CULO", "GUEY", "KACA", "KAGA", "KOGE", "KAKA", "MAME", "MEAR", "MEON",
    "MOCO", "PEDA", "POPO", "PENE", "PUTO", "RATA", "LOCO"
};

// Verificación y Modificación de palabras prohibidas segun el Diccionario
string corregirRFC(const string& rfc) {
    for (const string& palabra : palabrasProhibidas){
        if (rfc == palabra) {
            return rfc.substr(0,3) + "x"; // Remplaza la última letra por 'x'
        }
    }
    return rfc;
}

// Función para obtener la primera vocal interna de una cadena
char obtenerPrimeraVocalInterna(const string& str) {
    for (size_t i = 1; i < str.length(); ++i) {
        char c = str[i];
        if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            return c;
    }
    return 'X'; // Si no se encunetra ninguna vocal interna, se usa X
}

// Función principal para calcular el RFC del empleado

string calcularRFC(const string& nombre, const string& apellidoPaterno, 
const string& apellidoMaterno, const string& fechaNacimiento) {
    
    // Se declara la variable dónde se guardara el RFC
    string rfc;
    
    // Se obtiene la letra inicial y la primera vocal interna del apellidoPaterno
    char letraInicial =  apellidoPaterno[0];
    char PrimeraVocalInterna = obtenerPrimeraVocalInterna(apellidoPaterno);
    
    // Se obtiene la inicial deel apellido materno o se usa  una 'x' si existe
    char inicialApellidoMaterno = (!apellidoMaterno.empty()) ? apellidoMaterno[0] : 'x';
    
    // Se obtiene la inicial del primer nombre
    char inicialNombre = nombre[0];
    
    // Se obtienen los dos últimos digitos del año de fechaNacimiento
    string anio = fechaNacimiento.substr(2, 2);
    
    // Se obtiene el mes y día de fechaNacimiento
    string mes = fechaNacimiento.substr(5, 2);
    string dia = fechaNacimiento.substr(8, 2);
    
    // Se construye el RFC sumando el texto de la información proporcionada
    rfc = letraInicial;
    rfc += PrimeraVocalInterna;
    rfc += inicialApellidoMaterno;
    rfc += inicialNombre;
    
    // Aquí se ejecuta la comparación de malas palabras en el diccionario y se sutituye con una X
    rfc = corregirRFC(rfc);
    
    // Realiza la corrección y se continua creandon el rfc
    rfc += anio;
    rfc += mes;
    rfc += dia;
    return rfc;
}

int main() {
    // Escribe en consola los pasos a seguir y espera los datos en mayúsculas
    string nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento;
    cout << "Introduce tu nombre: ";
    getline(cin, nombre);
    cout << "Introduce tu apellido paterno: ";
    getline(cin, apellidoPaterno);
    cout << "Introduce tu apellido materno (Si no cuenta con el, precione ENTER): ";
    getline(cin, apellidoMaterno);
    cout << "Introduce la fecha de nacimiento en el siguiente formato (YYYY-MM-DD): ";
    getline(cin, fechaNacimiento);
    string rfc = calcularRFC(nombre, apellidoPaterno, apellidoMaterno, fechaNacimiento);
    cout << "RFC: " << rfc << endl;
    
    return 0;
    
}
