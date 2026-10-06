#pragma once

// Libreria de despedidas.
// Se usa en el ejemplo 3.

#include <iostream>
#include <string>

// Imprime una despedida para la persona indicada.
// Recibe: el nombre de la persona.
// Devuelve: nada.
void despedir(std::string nombre) {
    std::cout << "Adios, " << nombre << "\n";
}
