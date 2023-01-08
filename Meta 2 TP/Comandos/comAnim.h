#ifndef META_2_TP_COMANIM_H
#define META_2_TP_COMANIM_H

#include "../Utils/utils.h"
#include "../Animais/animal.h"
#include "comando.h"
#include "../Animais/animalMisterio.h"
#include "../Animais/canguru.h"
#include "../Animais/coelho.h"
#include "../Animais/lobo.h"
#include "../Animais/ovelha.h"

using namespace std;

/* 
        Apresenta a lista de animais(da reserva): ID, espécie, saúde
        
        Syntax: anim
 */

class comAnim : public Comando{

public:

    comAnim();
    void execute(const string &comando, Reserva &reserva) override;

};


#endif //META_2_TP_COMANIM_H
