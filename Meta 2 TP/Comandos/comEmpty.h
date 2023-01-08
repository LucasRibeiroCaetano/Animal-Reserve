#ifndef META_2_TP_COMEMPTY_H
#define META_2_TP_COMEMPTY_H

#include "../Utils/utils.h"
#include "comando.h"

using namespace std;

//Eliminar o que quer que esteja numa posição

/*
        Elimina o que quer que exista na posicao dada (animais nao deixam corpos)

        Syntax: empty <linha> <coluna>
 */

class comEmpty : public Comando{

public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMEMPTY_H
