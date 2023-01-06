#ifndef META_2_TP_RESERVA_H
#define META_2_TP_RESERVA_H

#include "../Utils/utils.h"
#include "areaVisivel.h"
#include "segmento.h"

using namespace std;

class Reserva {

    class areaVisivel;

    //Valores Random entre 16 e 500
    int NL,
        NC;

    Segmento** segmentos;

    //Uma reserva tem uma área visível
    areaVisivel area;

    //Cada segmento é uma classe que representa um bloco da reserva.
    //Em cada bloco vai ser guardado dinâmicamente uma lista com os animais e a comida que lá residem.


public:

    Reserva();
    ~Reserva();

    getNL() const;
    getNC() const;

};


#endif //META_2_TP_RESERVA_H
