#ifndef META_2_TP_COMANDO_GUARDARESTADO_H
#define META_2_TP_COMANDO_GUARDARESTADO_H

#include "../Utils/utils.h"
#include "comando.h"

using namespace std;

//Armazenar o estado da reserva em memória:
/*

        Syntax: store <nome>

        Grava o estado do da reserva em memória, associando-lhe um nome. Esta ação
        consiste em fazer uma espécie de savegame para memória, possibilitando ao utilizador
        manter em memória diversas (várias) reservas, correspondentes a diversos momentos,
        permitindo-lhe a qualquer momento recuperar um desses momentos. A reserva
        gravada continua ativa, mas a cópia feita para memória já não será afetada pelos
        comandos escritos a partir deste momento.

 */

class comando_guardarEstado : public comando{

public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMANDO_GUARDARESTADO_H
