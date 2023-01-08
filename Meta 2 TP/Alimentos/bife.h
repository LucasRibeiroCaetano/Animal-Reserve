#ifndef META_2_TP_BIFE_H
#define META_2_TP_BIFE_H

#include "../Utils/utils.h"
#include "alimento.h"

using namespace std;

class Bife : Alimento{

public:

    Bife(int id, Reserva &reserva, int x, int y);
    ~Bife();

};


#endif //META_2_TP_BIFE_H
