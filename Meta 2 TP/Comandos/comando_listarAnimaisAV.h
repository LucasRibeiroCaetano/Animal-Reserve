#ifndef META_2_TP_COMANDO_LISTARANIMAISAV_H
#define META_2_TP_COMANDO_LISTARANIMAISAV_H

#include "../Utils/utils.h"
#include "../Animais/animal.h"
#include "comando.h"

using namespace std;

//Listar ID dos animais na área visível da reserva

/*

        Syntax: visanim

        Apresenta a lista de animais: ID, espécie, saúde

 */

class comando_listarAnimaisAV : public comando{


public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMANDO_LISTARANIMAISAV_H
