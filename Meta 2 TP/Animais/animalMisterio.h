#ifndef META_2_TP_ANIMALMISTERIO_H
#define META_2_TP_ANIMALMISTERIO_H

#include "animal.h"
#include "../Utils/utils.h"

using namespace std;

class animalMisterio : public Animal{

public:

    //Nasce -> Construtor
    animalMisterio(int id, string nome, int linha, int coluna);

    //Morre -> Destrutor
    ~animalMisterio() override;

    void movimento() override;
    void alimentacao() override;
    void interacao() override;

};


#endif //META_2_TP_ANIMALMISTERIO_H
