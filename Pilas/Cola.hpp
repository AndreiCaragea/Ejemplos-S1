#ifndef COLA_HPP
#define COLA_HPP

#include <cstddef>
#include <stdexcept>
#include "NodoCola.hpp"

class Cola {
private:
    NodoCola* frente;
    NodoCola* fondo;
    std::size_t n;

public:
    Cola();
    ~Cola();

    void enqueue(int valor);
    void dequeue();
    int  front() const;
    int  back() const;
    bool empty() const;
    std::size_t size() const;
    void clear();

    void imprimir() const;
};

#endif // COLA_HPP
