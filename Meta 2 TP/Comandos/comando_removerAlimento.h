#ifndef META_2_TP_COMANDO_REMOVERALIMENTO_H
#define META_2_TP_COMANDO_REMOVERALIMENTO_H

#include "../Utils/utils.h"
#include "../Alimentos/alimento.h"
#include "comando.h"

using namespace std;

//Remover Alimento

/*

        nofood <linha> <coluna>
        nofood <ID> (só parametro - assume que é o ID)

 */

class comando_removerAlimento : public comando{

public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMANDO_REMOVERALIMENTO_H
