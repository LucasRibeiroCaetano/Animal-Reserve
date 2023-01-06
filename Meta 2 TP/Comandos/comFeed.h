#ifndef META_2_TP_COMFEED_H
#define META_2_TP_COMFEED_H

#include "../Utils/utils.h"
#include "../Animais/animal.h"
#include "comando.h"

using namespace std;

//Criar Animal:
/*

        animal <especie: c / o / l / g / m> <linha> <coluna> (coelho/ovelha/lobo/cang./mist.)
        animal <especie: c / o / l / g / m> (fica numa posição aleatória)

 */

class comando_criarAnimal : public Comando{


public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMFEED_H
