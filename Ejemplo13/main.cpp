#include "Persona.hpp"
#include <vector>
#include <iostream>

int main() {
    std::vector<Persona> personas;
    personas.reserve(10);

    for (int edad = 18; edad <= 27; ++edad) {
        personas.emplace_back(edad);
    }

    std::cout << "Listado de personas (edades 18..27):\n";
    for (const auto& p : personas) p.mostrar();

    return 0;
}
