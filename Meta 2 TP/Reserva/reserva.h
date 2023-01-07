#ifndef META_2_TP_RESERVA_H
#define META_2_TP_RESERVA_H

#include "../Utils/utils.h"
#include "segmento.h"

using namespace std;

class Reserva {

    //Valores Random entre 16 e 500
    int     NL,
            NC,

            //Variáveis da Área Visível
            AVlar,
            AValt,
            AVcseX,
            AVcseY,
            AVlimX,
            AVlimY;



    Segmento** segmentos;
    //Cada segmento é uma classe que representa um bloco da reserva.
    //Em cada bloco vai ser guardado dinâmicamente uma lista com os animais e a comida que lá residem.


public:

    Reserva(int largura, int altura);
    ~Reserva();

    int getCseX() const;
    int getCseY() const;
    int getLimX() const;
    int getLimY() const;
    int getNL() const;
    int getNC() const;

    void mostraReserva() const;

    Segmento** getSegmentos() const;
};


#endif //META_2_TP_RESERVA_H
