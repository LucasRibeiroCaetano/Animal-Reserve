#ifndef META_2_TP_ANIMAL_H
#define META_2_TP_ANIMAL_H

#include "../Utils/utils.h"

using namespace std;

//Classe Base
class animal {

    float peso;
    int saude, //not sure do tipo de variável
        fome; //not sure do tipo de variável
    bool vivo;

public:

    animal(float p, int s, int f);
    virtual ~animal() = 0;

    virtual void movimento() = 0;
    virtual void alimentacao() = 0;
    virtual void interacao() = 0;

};


#endif //META_2_TP_ANIMAL_H
