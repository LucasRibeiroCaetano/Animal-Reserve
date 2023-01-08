#ifndef META_2_TP_COMSTORE_H
#define META_2_TP_COMSTORE_H

#include "../Utils/utils.h"
#include "comando.h"
#include "../Reserva/reserva.h"

using namespace std;

/*
        Grava o estado do da reserva em memória, associando-lhe um nome.

        Syntax: store <nome>
 */

class comStore : public Comando{

public:

    comStore();

    void execute(const string &comando, Reserva &reserva) override;

};


#endif //META_2_TP_COMSTORE_H
