#ifndef META_2_TP_COMSLIDE_H
#define META_2_TP_COMSLIDE_H

#include "../Utils/utils.h"
#include "comando.h"

using namespace std;


/*
        Deslocar a área de visualização (analogia: mover uma “janela deslizante”)

        Syntax: slide <direcao: up/down/right/left> <linhas/colunas>
 */

class comSlide : public Comando{

public:

    void execute(const string &comando) override;

};


#endif //META_2_TP_COMSLIDE_H
