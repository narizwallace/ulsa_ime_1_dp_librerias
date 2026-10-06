// Ejemplo 0: un programa sin libreria propia.
//
// Que observar: la funcion saludar esta escrita en este mismo
// archivo. Si otro programa la necesita, hay que copiarla.
//
// Compilar: g++ -Wall -Wextra -std=c++17 -Iinclude src/ejemplo_0_sin_libreria.cpp -o ejemplo
// Ejecutar: ./ejemplo

#include <iostream>
#include <string>

// Imprime un saludo para la persona indicada.
// Recibe: el nombre de la persona.
// Devuelve: nada.
void saludar(std::string nombre) {
    std::cout << "Hola, " << nombre << "\n";
}

int main() {
    saludar("Ana");
    return 0;
}
