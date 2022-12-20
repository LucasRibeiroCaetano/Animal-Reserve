#ifndef META_2_TP_LOBO_H
#define META_2_TP_LOBO_H

#include "animal.h"
#include "../Utils/utils.h"

using namespace std;

class lobo : public animal{


public:

    //Nasce -> Construtor
    lobo();

    //Morre -> Destrutor
    ~lobo() override;

    void movimento() override;
    void alimentacao() override;
    void interacao() override;

};


#endif //META_2_TP_LOBO_H
