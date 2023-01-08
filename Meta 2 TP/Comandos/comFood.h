#ifndef META_2_TP_COMFOOD_H
#define META_2_TP_COMFOOD_H

#include "../Utils/utils.h"
#include "../Alimentos/alimento.h"
#include "comando.h"

using namespace std;

/*

      Cria um alimento a escolha  (“corpos” só podem ser criados colocando primeiro um animal e depois matando-o)

      Syntax:  food <tipo: r / t / b / a> <linha> <coluna>
                  or
               food <tipo: r / t / b / a>

 */

class comFood : public Comando{


public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMFOOD_H
