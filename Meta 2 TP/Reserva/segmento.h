#ifndef META_2_TP_SEGMENTO_H
#define META_2_TP_SEGMENTO_H

#include "../Animais/animal.h"
#include "../Alimentos/alimento.h"

class Segmento {

    vector< Animal* > animais;
    Alimento* alimento;

    char display;

public:

    Segmento();
    ~Segmento();

};


#endif //META_2_TP_SEGMENTO_H
