#ifndef META_2_TP_COMLOAD_H
#define META_2_TP_COMLOAD_H

#include "../Utils/utils.h"
#include "comando.h"
#include "../Reserva/reserva.h"

using namespace std;

/*
        Le os comandos de um ficheiro , valida-os e executa-os

        Syntax: load <nome-do-ficheiro>
 */

class comLoad : public Comando{

public:

    comLoad();
    void execute(const string &comando, Reserva &reserva) override;

};


#endif //META_2_TP_COMLOAD_H
