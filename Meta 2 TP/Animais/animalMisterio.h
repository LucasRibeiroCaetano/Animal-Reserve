#ifndef META_2_TP_ANIMALMISTERIO_H
#define META_2_TP_ANIMALMISTERIO_H

#include "animal.h"
#include "../Utils/utils.h"

using namespace std;

class animalMisterio : public animal{

public:

    //Nasce -> Construtor
    animalMisterio();

    //Morre -> Destrutor
    ~animalMisterio() override;

    void movimento() override;
    void alimentacao() override;
    void interacao() override;

};


#endif //META_2_TP_ANIMALMISTERIO_H
