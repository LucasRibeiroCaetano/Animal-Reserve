#ifndef META_2_TP_COMANIM_H
#define META_2_TP_COMANIM_H

#include "../Utils/utils.h"
#include "../Animais/animal.h"
#include "comando.h"

using namespace std;

/* 
        Apresenta a lista de animais(da reserva): ID, espécie, saúde
        
        Syntax: anim
 */

class comAnim : public Comando{

public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMANIM_H
