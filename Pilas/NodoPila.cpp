#include "NodoPila.hpp"

NodoPila::NodoPila(int d, NodoPila* sig) : dato(d), siguiente(sig) {}
NodoPila::~NodoPila() = default;
