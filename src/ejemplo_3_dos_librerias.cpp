// Ejemplo 3: usar dos librerias.
//
// Que observar: cada libreria tiene un tema (saludos y despedidas)
// y este archivo las reune. main queda corto y facil de leer.
//
// Compilar: g++ -Wall -Wextra -std=c++17 -Iinclude src/ejemplo_3_dos_librerias.cpp -o ejemplo
// Ejecutar: ./ejemplo

#include "saludos.h"
#include "despedidas.h"

int main() {
    saludar("Ana");
    despedir("Ana");
    return 0;
}
