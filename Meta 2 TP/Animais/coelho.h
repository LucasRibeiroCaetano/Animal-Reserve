#ifndef META_2_TP_COELHO_H
#define META_2_TP_COELHO_H

#include "animal.h"
#include "../Utils/utils.h"

using namespace std;

class coelho : public animal{

public:

    //Nasce -> Construtor
    coelho();

    //Morre -> Destrutor
    ~coelho() override;

    void movimento() override;
    void alimentacao() override;
    void interacao() override;

};


#endif //META_2_TP_COELHO_H
