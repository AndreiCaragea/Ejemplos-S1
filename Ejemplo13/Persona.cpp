#include "Persona.hpp"
#include <iostream>

int  Persona::s_nextDni    = 10000000; // base
bool Persona::s_nextGenero = false;    // false=Hombre(0), true=Mujer(1)

static char letraDNI(int numero) {
    static const char* letras = "TRWAGMYFPDXBNJZSQVHLCKE";
    return letras[numero % 23];
}

void Persona::generarDni() {
    char letra = letraDNI(s_nextDni);
    std::snprintf(dni, sizeof(dni), "%08d%c", s_nextDni, letra);
    ++s_nextDni;
}

void Persona::asignarGeneroAuto() {
    genero = s_nextGenero ? true : false; // alterna
    s_nextGenero = !s_nextGenero;
}

Persona::Persona(int edad_) : genero(false), edad(edad_) {
    asignarGeneroAuto();
    generarDni();
}

Persona::~Persona() = default;

int Persona::getEdad() const { return edad; }
bool Persona::esMujer() const { return genero; }
void Persona::setEdad(int nuevaEdad) { edad = nuevaEdad; }

void Persona::mostrar() const {
    std::cout << "Persona { DNI=" << dni
              << ", Edad=" << edad
              << ", Genero=" << (genero ? "Mujer(1)" : "Hombre(0)")
              << " }\n";
}
