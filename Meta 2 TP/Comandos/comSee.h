#ifndef META_2_TP_COMSEE_H
#define META_2_TP_COMSEE_H

#include "../Utils/utils.h"
#include "comando.h"

using namespace std;

//Ver o que se encontra numa posição, indicando toda a informação da posição e das coisas que lá estão

/*

        Syntax: see <linha> <coluna>

 */

class comSee : public Comando{

public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMSEE_H