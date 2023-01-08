#ifndef META_2_TP_COMSEE_H
#define META_2_TP_COMSEE_H

#include "../Utils/utils.h"
#include "comando.h"

using namespace std;

/*
        ve o que se encontra na posicao dada mostrando toda a informacao da posicao e das coisas que la estao

        Syntax: see <linha> <coluna>
 */

class comSee : public Comando{

public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMSEE_H
