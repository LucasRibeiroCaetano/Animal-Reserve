#ifndef META_2_TP_AREAVISIVEL_H
#define META_2_TP_AREAVISIVEL_H

#include "../Utils/utils.h"
#include "reserva.h"

class areaVisivel {

    int largura,
            altura,
            cseX,
            cseY,
            limX,
            limY;

public:
    areaVisivel();

    int getCseX() const;
    int getCseY() const;
    int getLimX() const;
    int getLimY() const;

    void mostraReserva() const;
};


#endif //META_2_TP_AREAVISIVEL_H
