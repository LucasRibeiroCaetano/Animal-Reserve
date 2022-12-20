#ifndef META_2_TP_COMANDO_RECUPERAESTADO_H
#define META_2_TP_COMANDO_RECUPERAESTADO_H

#include "../Utils/utils.h"
#include "comando.h"

using namespace std;

//Reativar um estado da reserva previamente armazenado em memória

/*

        Syntax: restore <nome>
        Recupera um dado estado da reserva em memória, identificado ao nome indicado, e
        carrega-o.
        A reserva recuperada passa a ser o que está em efeito: os comandos passam a agir sobre esta.
        A reserva que estava ativa antes é descartada

 */

class comando_recuperaEstado : public comando{


public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMANDO_RECUPERAESTADO_H
