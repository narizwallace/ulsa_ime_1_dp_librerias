#pragma once

// Libreria de saludos.
// Se usa en los ejemplos 1 y 3.

#include <iostream>
#include <string>

// Imprime un saludo para la persona indicada.
// Recibe: el nombre de la persona.
// Devuelve: nada.
void saludar(std::string nombre) {
    std::cout << "Hola, " << nombre << "\n";
}
