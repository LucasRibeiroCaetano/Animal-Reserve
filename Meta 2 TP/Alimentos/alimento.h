#ifndef META_2_TP_ALIMENTO_H
#define META_2_TP_ALIMENTO_H

#include "../Utils/utils.h"

using namespace std;

//Classe Base
class Alimento {

protected:
    char tipo;
    int id,
        valorNutritivo,
        toxicidade,
        duracao,
        linha,
        coluna;      //Tempo de "Vida"
     vector<string> cheiros;


public:

    Alimento(int id, int linha, int coluna);
    Alimento(int id, int linha, int coluna, int valorNutritivo, int toxicidade);
    virtual ~Alimento() = 0;

};


#endif //META_2_TP_ALIMENTO_H
