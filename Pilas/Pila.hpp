#ifndef PILA_HPP
#define PILA_HPP

#include <cstddef>
#include <stdexcept>
#include "NodoPila.hpp"

class Pila {
private:
    NodoPila* cima;
    std::size_t n;

public:
    Pila();
    ~Pila();

    void push(int valor);
    void pop();
    int  top() const;
    bool empty() const;
    std::size_t size() const;
    void clear();

    void imprimir() const;
};

#endif // PILA_HPP
