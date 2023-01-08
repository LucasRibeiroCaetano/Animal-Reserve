#ifndef META_2_TP_COMINFO_H
#define META_2_TP_COMINFO_H

#include "../Utils/utils.h"
#include "../Animais/animal.h"
#include "../Alimentos/alimento.h"
#include "comando.h"
#include "../Reserva/reserva.h"

using namespace std;

/*
    Ver informação acerca de uma elemento do simulador (animal ou alimento)

    Syntax: info <ID>
 */

class comInfo : public Comando{

public:

    comInfo();
    void execute(const string &comando, Reserva &reserva) override;

};


#endif //META_2_TP_COMINFO_H
