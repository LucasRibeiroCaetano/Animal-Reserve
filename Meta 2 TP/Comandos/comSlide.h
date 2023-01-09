#ifndef META_2_TP_COMSLIDE_H
#define META_2_TP_COMSLIDE_H

#include "../Utils/utils.h"
#include "comando.h"
#include "../Reserva/reserva.h"

using namespace std;


/*
        Deslocar a área de visualização (analogia: mover uma “janela deslizante”)

        Syntax: slide <direcao: up/down/right/left> <linhas/colunas>
 */

class comSlide : public Comando{

public:
    comSlide();

    void execute(const string &comando, Reserva &reserva) override;

};


#endif //META_2_TP_COMSLIDE_H
