#ifndef META_2_TP_COMFEED_H
#define META_2_TP_COMFEED_H

#include "../Utils/utils.h"
#include "../Animais/animal.h"
#include "comando.h"

using namespace std;

/*
        Alimenta diretamente animais

        Syntax: feed <linha> <coluna> <pontos nutritivos> <pontos de toxicidade>
 */

class comFeed : public Comando{

public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMFEED_H
