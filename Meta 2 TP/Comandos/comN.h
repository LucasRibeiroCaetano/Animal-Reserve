#ifndef META_2_TP_COMN_H
#define META_2_TP_COMN_H

#include "../Utils/utils.h"
#include "comando.h"
#include "../Reserva/reserva.h"

using namespace std;

//Passar para o instante seguinte da simulação

/*
        Avancar na simulacao

        Syntax: n - avanca 1 instante
                    or
                n <N> - avanca n instantes 1 de cada vez
                    or
                n <N><P> - avanca n instantes 1 de cada vez parando p segundos
*/

class comN : public Comando{

public:

    comN();
    void execute(const string &comando, Reserva &reserva) override;

};


#endif //META_2_TP_COMN_H
