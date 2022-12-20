#ifndef META_2_TP_RESERVA_H
#define META_2_TP_RESERVA_H

#include "../Utils/utils.h"
#include "areaVisivel.h"

using namespace std;

class reserva {

    //Valores Random entre 16 e 500
    int NL,
        NC;

    //Uma reserva tem uma área visível
    areaVisivel *a; //Confirmar isto

    //A reserva irá ter NL*NC Segmentos
    //TODO: array dinâmico bidimensional de segmentos... Usar new como na aula.


    //Cada segmento é uma classe que representa um bloco da reserva.
    //Em cada bloco vai ser guardado dinâmicamente uma lista com os animais e a comida que lá residem.


public:

    reserva();
    ~reserva();

};


#endif //META_2_TP_RESERVA_H
