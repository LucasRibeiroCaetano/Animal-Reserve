#ifndef META_2_TP_COMEMPTY_H
#define META_2_TP_COMEMPTY_H

#include "../Utils/utils.h"
#include "comando.h"

using namespace std;

//Eliminar o que quer que esteja numa posição

/*

        Syntax: empty <linha> <coluna>
        O que quer que esteja na posição é removido do simulador sem mais cerimónias
        (por exemplo, se forem animais, nem chegam a passar pelo processo de morrer nem produzir corpos).

 */

class comEmpty : public Comando{

public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMEMPTY_H
