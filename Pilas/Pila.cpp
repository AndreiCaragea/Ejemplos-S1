#include "Pila.hpp"
#include <iostream>

Pila::Pila() : cima(nullptr), n(0) {}
Pila::~Pila() { clear(); }

void Pila::push(int valor) {
    NodoPila* nodo = new NodoPila(valor, cima);
    cima = nodo;
    ++n;
}

void Pila::pop() {
    if (empty()) throw std::runtime_error("Pila vacia");
    NodoPila* tmp = cima;
    cima = cima->siguiente;
    delete tmp;
    --n;
}

int Pila::top() const {
    if (empty()) throw std::runtime_error("Pila vacia");
    return cima->dato;
}

bool Pila::empty() const { return cima == nullptr; }
std::size_t Pila::size() const { return n; }

void Pila::clear() {
    while (!empty()) pop();
}

void Pila::imprimir() const {
    std::cout << "Pila [cima -> fondo]: ";
    for (NodoPila* it = cima; it != nullptr; it = it->siguiente) {
        std::cout << it->dato << ' ';
    }
    std::cout << '\n';
}
