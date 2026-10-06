// Ejemplo 1: usar una libreria propia.
//
// Que observar: la funcion saludar ya no esta en este archivo.
// Vive en include/saludos.h y aqui solo se incluye y se llama.
// El programa imprime lo mismo que el ejemplo 0.
//
// Compilar: g++ -Wall -Wextra -std=c++17 -Iinclude src/ejemplo_1_una_libreria.cpp -o ejemplo
// Ejecutar: ./ejemplo

#include "saludos.h"

int main() {
    saludar("Ana");
    return 0;
}
