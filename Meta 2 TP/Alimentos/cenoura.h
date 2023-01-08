#ifndef META_2_TP_CENOURA_H
#define META_2_TP_CENOURA_H

#include "../Utils/utils.h"
#include "alimento.h"

using namespace std;

class Cenoura : Alimento{



public:

    Cenoura(int id, Reserva &reserva, int x, int y);
    ~Cenoura();

};


#endif //META_2_TP_CENOURA_H
