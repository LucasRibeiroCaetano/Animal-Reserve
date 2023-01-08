#ifndef META_2_TP_COMRESTORE_H
#define META_2_TP_COMRESTORE_H

#include "../Utils/utils.h"
#include "comando.h"

using namespace std;

/*
        Recupera um dado estado da reserva em memória, identificado ao nome indicado, e carrega-o

        Syntax: restore <nome>
 */

class comRestore : public Comando{


public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMRESTORE_H
