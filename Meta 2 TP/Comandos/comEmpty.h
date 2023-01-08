#ifndef META_2_TP_COMEMPTY_H
#define META_2_TP_COMEMPTY_H

#include "../Utils/utils.h"
#include "comando.h"
#include "../Reserva/reserva.h"

using namespace std;

//Eliminar o que quer que esteja numa posição

/*
        Elimina o que quer que exista na posicao dada (animais nao deixam corpos)

        Syntax: empty <linha> <coluna>
 */

class comEmpty : public Comando{

public:

    comEmpty();
    void execute(const string &comando, Reserva &reserva) override;

};


#endif //META_2_TP_COMEMPTY_H
