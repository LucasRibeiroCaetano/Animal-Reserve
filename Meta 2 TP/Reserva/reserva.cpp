#include "reserva.h"

Reserva::Reserva() {

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(16, 500);

    NC = dis(gen);
    NL = dis(gen);

    segmentos = new Segmento*[NC];

    for (int i = 0; i < NC; i++)
        segmentos[i] = new Segmento[NL];
}

Reserva * Reserva::instance = nullptr;

Reserva::~Reserva() {

    for (int i = 0; i < NC; i++) {
        for (int j = 0; j < NL; j++)
            segmentos[i][j].~Segmento();

        delete[] segmentos[i];
    }

    delete[] segmentos;
}

int Reserva::getNL() const { return NL; }

int Reserva::getNC() const { return NC; }

Segmento **Reserva::getSegmentos() const{
    return segmentos;
}
