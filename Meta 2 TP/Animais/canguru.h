#ifndef META_2_TP_CANGURU_H
#define META_2_TP_CANGURU_H

#include "animal.h"
#include "../Utils/utils.h"

class canguru : public animal{


public:

    //Nasce -> Construtor
    canguru();

    //Morre -> Destrutor
    ~canguru() override;

    void movimento() override;
    void alimentacao() override;
    void interacao() override;

};


#endif //META_2_TP_CANGURU_H
