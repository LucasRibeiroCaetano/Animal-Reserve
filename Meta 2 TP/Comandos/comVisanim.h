#ifndef META_2_TP_COMVISANIM_H
#define META_2_TP_COMVISANIM_H

#include "../Utils/utils.h"
#include "../Animais/animal.h"
#include "comando.h"

using namespace std;


/*
        Apresenta a lista de animais(da area visivel): ID, espécie, saúde

        Syntax: visanim
 */

class comando_listarAnimaisAV : public Comando{

public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMVISANIM_H
