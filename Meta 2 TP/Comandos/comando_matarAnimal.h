#ifndef META_2_TP_COMANDO_MATARANIMAL_H
#define META_2_TP_COMANDO_MATARANIMAL_H

#include "../Utils/utils.h"
#include "../Animais/animal.h"
#include "comando.h"

using namespace std;

//Matar Animal

/*

        kill <linha> <coluna> (identifica por posição)
        killid <id> (identifica por ID)

 */

class comando_matarAnimal : public comando{


public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMANDO_MATARANIMAL_H
