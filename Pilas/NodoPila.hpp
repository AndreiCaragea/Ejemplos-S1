#ifndef NODOPILA_HPP
#define NODOPILA_HPP

class NodoPila {
public:
    int dato;
    NodoPila* siguiente;

    explicit NodoPila(int d, NodoPila* sig = nullptr);
    ~NodoPila();
};

#endif // NODOPILA_HPP
