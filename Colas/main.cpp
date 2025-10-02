#include "Cola.hpp"
#include <iostream>

int main() {
    Cola q;

    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(9);
    q.imprimir(); // 5 7 9

    std::cout << "Frente: " << q.front() << ", Fondo: " << q.back() << '\n';
    q.dequeue();
    std::cout << "Frente tras dequeue: " << q.front() << '\n';

    std::cout << "Tam: " << q.size() << '\n';
    q.imprimir();

    q.clear();
    std::cout << "Vacia? " << (q.empty() ? "si" : "no") << '\n';
    return 0;
}
