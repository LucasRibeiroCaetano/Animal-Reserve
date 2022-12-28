#ifndef META_2_TP_BIFE_H
#define META_2_TP_BIFE_H

#include "../Utils/utils.h"
#include "alimento.h"

using namespace std;

class Bife : Alimento{


public:

    Bife(char nome, int vNutritivo,int toxicidade, int duracao, vector<string> cheiros);
    ~Bife();

};


#endif //META_2_TP_BIFE_H
