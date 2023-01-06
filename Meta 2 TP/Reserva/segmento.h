#ifndef META_2_TP_SEGMENTO_H
#define META_2_TP_SEGMENTO_H

#include "../Animais/animal.h"
#include "../Alimentos/alimento.h"

class Segmento {

    Animal** animais;
    Alimento* alimento;

    char display;

public:

    Segmento();
    ~Segmento();

    Animal **getListaAnimais() const;
    Alimento *getListaAlimento() const;

    char getDisplay() const;
    void setDisplay(char c);
};


#endif //META_2_TP_SEGMENTO_H
