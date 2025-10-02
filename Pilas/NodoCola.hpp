#ifndef NODOCOLA_HPP
#define NODOCOLA_HPP

class NodoCola {
public:
    int dato;
    NodoCola* siguiente;

    explicit NodoCola(int d);
    ~NodoCola();
};

#endif // NODOCOLA_HPP
