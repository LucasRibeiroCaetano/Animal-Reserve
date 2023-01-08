#ifndef META_2_TP_COMNOFOOD_H
#define META_2_TP_COMNOFOOD_H

#include "../Utils/utils.h"
#include "../Alimentos/alimento.h"
#include "comando.h"
#include "../Reserva/reserva.h"

using namespace std;

/*
      Remove alimento

      Syntax:  nofood <linha> <coluna>
                 or
               food <ID>
 */

class comNofood : public Comando{

public:

    comNofood();
    void execute(const string &comando, Reserva &reserva) override;

};


#endif //META_2_TP_COMNOFOOD_H
