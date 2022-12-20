#ifndef META_2_TP_COMIDA_H
#define META_2_TP_COMIDA_H

#include "../Utils/utils.h"

using namespace std;

//Classe Base
class comida {

    int valorNutritivo,
        toxicidade,
        tVida;      //Tempo de Vida
    //Cheiro? Dizem que possuem 1 ou mais cheiros ou seja é possível que tenha de ser um array depois vê o tamanho


public:

    comida(int vN, int t, int tV);
    virtual ~comida() = 0;

};


#endif //META_2_TP_COMIDA_H
