#ifndef META_2_TP_OVELHA_H
#define META_2_TP_OVELHA_H

#include "animal.h"
#include "../Utils/utils.h"

using namespace std;

class ovelha : public animal{



public:

    //Nasce -> Construtor
    ovelha();

    //Morre -> Destrutor
    ~ovelha() override;

    void movimento() override;
    void alimentacao() override;
    void interacao() override;

};


#endif //META_2_TP_OVELHA_H
