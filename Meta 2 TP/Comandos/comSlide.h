#ifndef META_2_TP_COMSLIDE_H
#define META_2_TP_COMSLIDE_H

#include "../Utils/utils.h"
#include "comando.h"

using namespace std;

//Deslocar a área de visualização (analogia: mover uma “janela deslizante”)

/*

        Syntax: slide <direcao: up/down/right/left> <linhas/colunas>
        É aceite uma alternativa (documentada) que seja mais fácil de escrever pelo utilizador

 */

class comSlide : public Comando{

public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMSLIDE_H