#ifndef META_2_TP_COMKILLID_H
#define META_2_TP_COMKILLID_H

#include "../Utils/utils.h"
#include "../Animais/animal.h"
#include "comando.h"
#include "../Reserva/reserva.h"

using namespace std;

/*
        Mata animal com o id inserido

        Syntax: kill <id>
 */

class comKillid : public Comando{

public:

    comKillid();
    void execute(const string &comando, Reserva &reserva) override;

};


#endif //META_2_TP_COMKILLID_H
