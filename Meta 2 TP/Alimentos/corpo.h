#ifndef META_2_TP_CORPO_H
#define META_2_TP_CORPO_H

#include "alimento.h"
#include "../Utils/utils.h"

using namespace std;

class Corpo : Alimento{


public:

    Corpo(int id, int x, int y, int valorNutritivo, int toxicidade);
    ~Corpo();

};


#endif //META_2_TP_CORPO_H
