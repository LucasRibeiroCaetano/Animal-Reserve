#ifndef META_2_TP_COMVISANIM_H
#define META_2_TP_COMVISANIM_H

#include "../Utils/utils.h"
#include "../Animais/animal.h"
#include "comando.h"
#include "../Reserva/reserva.h"

using namespace std;


/*
        Apresenta a lista de animais(da area visivel): ID, espécie, saúde

        Syntax: visanim
 */

class comVisanim : public Comando{

public:

    comVisanim();

    void execute(const string &comando, Reserva & reserva) override;

};


#endif //META_2_TP_COMVISANIM_H
