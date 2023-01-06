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

    getCseX() const;
    getCseY() const;
    getLimX() const;
    getLimY() const;
};


#endif //META_2_TP_AREAVISIVEL_H
