#ifndef META_2_TP_COMKILL_H
#define META_2_TP_COMKILL_H

#include "../Utils/utils.h"
#include "../Animais/animal.h"
#include "comando.h"

using namespace std;

/*
        Mata animal que esteja na localizacao inserida

        Syntax: kill <linha> <coluna>
 */

class comKill : public Comando{


public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMKILL_H
