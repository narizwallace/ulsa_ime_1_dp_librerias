// Libreria de saludos SIN #pragma once.
// Se usa solo en el ejemplo 2, para provocar el error.
//
// Es igual a saludos.h, pero le falta la primera linea.

#include <iostream>
#include <string>

// Imprime un saludo para la persona indicada.
// Recibe: el nombre de la persona.
// Devuelve: nada.
void saludar(std::string nombre) {
    std::cout << "Hola, " << nombre << "\n";
}
