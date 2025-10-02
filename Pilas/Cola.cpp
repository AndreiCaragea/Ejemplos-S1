#include "Cola.hpp"
#include <iostream>

Cola::Cola() : frente(nullptr), fondo(nullptr), n(0) {}
Cola::~Cola() { clear(); }

void Cola::enqueue(int valor) {
    NodoCola* nodo = new NodoCola(valor);
    if (empty()) {
        frente = fondo = nodo;
    } else {
        fondo->siguiente = nodo;
        fondo = nodo;
    }
    ++n;
}

void Cola::dequeue() {
    if (empty()) throw std::runtime_error("Cola vacia");
    NodoCola* tmp = frente;
    frente = frente->siguiente;
    if (!frente) fondo = nullptr;
    delete tmp;
    --n;
}

int Cola::front() const {
    if (empty()) throw std::runtime_error("Cola vacia");
    return frente->dato;
}

int Cola::back() const {
    if (empty()) throw std::runtime_error("Cola vacia");
    return fondo->dato;
}

bool Cola::empty() const { return frente == nullptr; }
std::size_t Cola::size() const { return n; }

void Cola::clear() {
    while (!empty()) dequeue();
}

void Cola::imprimir() const {
    std::cout << "Cola [frente -> fondo]: ";
    for (NodoCola* it = frente; it != nullptr; it = it->siguiente) {
        std::cout << it->dato << ' ';
    }
    std::cout << '\n';
}
