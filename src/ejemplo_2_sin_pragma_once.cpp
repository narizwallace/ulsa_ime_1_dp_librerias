// Ejemplo 2: que pasa sin #pragma once.
//
// OJO: este ejemplo NO compila, y es a proposito.
//
// Que observar: la libreria se incluye dos veces y no tiene
// #pragma once, asi que la funcion saludar queda escrita dos veces.
// El compilador responde con el error "redefinition of ...".
//
// Para corregirlo: agrega #pragma once como primera linea de
// include/saludos_sin_pragma.h y vuelve a compilar.
//
// Compilar: g++ -Wall -Wextra -std=c++17 -Iinclude src/ejemplo_2_sin_pragma_once.cpp -o ejemplo

#include "saludos_sin_pragma.h"
#include "saludos_sin_pragma.h"

int main() {
    saludar("Ana");
    return 0;
}
