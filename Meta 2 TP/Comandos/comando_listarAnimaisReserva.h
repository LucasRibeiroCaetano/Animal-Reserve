#ifndef META_2_TP_COMANDO_LISTARANIMAISRESERVA_H
#define META_2_TP_COMANDO_LISTARANIMAISRESERVA_H

#include "../Utils/utils.h"
#include "../Animais/animal.h"
#include "comando.h"

using namespace std;

//Listar ID dos animais na reserva

/*

        Syntax: anim

        Apresenta a lista de animais: ID, espécie, saúde

 */

class comando_listarAnimaisReserva : public comando{

public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMANDO_LISTARANIMAISRESERVA_H
