#ifndef META_2_TP_COMFOOD_H
#define META_2_TP_COMFOOD_H

#include "../Utils/utils.h"
#include "../Alimentos/alimento.h"
#include "comando.h"
#include "../Reserva/reserva.h"

using namespace std;

/*

      Cria um alimento a escolha  (“corpos” só podem ser criados colocando primeiro um animal e depois matando-o)

      Syntax:  food <tipo: r / t / b / a> <linha> <coluna>
                  or
               food <tipo: r / t / b / a>

 */

class comFood : public Comando{


public:

    comFood();
    void execute(const string &comando, Reserva &reserva) override;

};


#endif //META_2_TP_COMFOOD_H
