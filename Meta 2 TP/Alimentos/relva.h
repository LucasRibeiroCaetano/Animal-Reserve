#ifndef META_2_TP_RELVA_H
#define META_2_TP_RELVA_H

#include "alimento.h"
#include "../Utils/utils.h"
#include "../Reserva/reserva.h"

using namespace std;

class Relva : public Alimento {

public:

    Relva(int id, Reserva &reserva, int linha = 0, int coluna = 0);
    ~Relva();

    void novaRelva();

};


#endif //META_2_TP_RELVA_H
