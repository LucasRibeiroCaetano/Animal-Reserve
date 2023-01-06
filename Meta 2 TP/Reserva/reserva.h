#ifndef META_2_TP_RESERVA_H
#define META_2_TP_RESERVA_H

#include "../Utils/utils.h"
#include "areaVisivel.h"
#include "segmento.h"

using namespace std;

class Reserva {

    //Valores Random entre 16 e 500
    static int NL,
            NC;

    Segmento** segmentos;
    //Cada segmento é uma classe que representa um bloco da reserva.
    //Em cada bloco vai ser guardado dinâmicamente uma lista com os animais e a comida que lá residem.


public:

    Reserva();
    ~Reserva();

    static Reserva * instance;

    getNL() const;
    getNC() const;
    Segmento** getSegmentos() const;
};


#endif //META_2_TP_RESERVA_H
