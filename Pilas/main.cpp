#include "Pila.hpp"
#include <iostream>

int main() {
    Pila p;

    p.push(10);
    p.push(20);
    p.push(30);
    p.imprimir(); // 30 20 10

    std::cout << "Cima: " << p.top() << '\n';
    p.pop();
    std::cout << "Cima tras pop: " << p.top() << '\n';

    std::cout << "Tam: " << p.size() << '\n';
    p.imprimir();

    p.clear();
    std::cout << "Vacia? " << (p.empty() ? "si" : "no") << '\n';
    return 0;
}
