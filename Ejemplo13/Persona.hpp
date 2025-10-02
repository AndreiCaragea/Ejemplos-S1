#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <cstdio>

class Persona {
private:
    bool genero;        // 1 = Mujer, 0 = Hombre
    int  edad;
    char dni[10];       // 8 dígitos + letra + '\0'

    static int  s_nextDni;
    static bool s_nextGenero;

    void generarDni();
    void asignarGeneroAuto();

public:
    explicit Persona(int edad);
    ~Persona();

    int  getEdad() const;
    bool esMujer() const;
    void setEdad(int nuevaEdad);
    void mostrar() const;
};

#endif // PERSONA_HPP
