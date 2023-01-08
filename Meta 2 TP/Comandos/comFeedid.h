#ifndef META_2_TP_COMFEEDID_H
#define META_2_TP_COMFEEDID_H

#include "../Utils/utils.h"
#include "../Animais/animal.h"
#include "comando.h"

using namespace std;

/*
        Alimenta diretamente animais

        Syntax: feedid <ID> <pontos nutritivos> <pontos de toxicidade>
 */


class comFeedid : public Comando{
public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMFEEDID_H
