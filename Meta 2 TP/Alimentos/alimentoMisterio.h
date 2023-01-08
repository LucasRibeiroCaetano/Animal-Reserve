#ifndef META_2_TP_ALIMENTOMISTERIO_H
#define META_2_TP_ALIMENTOMISTERIO_H

#include "../Utils/utils.h"
#include "alimento.h"

using namespace std;

class alimentoMisterio : Alimento{


public:

    alimentoMisterio(int id, Reserva &reserva, int linha, int coluna);
    ~alimentoMisterio();

};


#endif //META_2_TP_ALIMENTOMISTERIO_H
