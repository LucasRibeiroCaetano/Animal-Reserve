#ifndef META_2_TP_COMIDA_H
#define META_2_TP_COMIDA_H

#include "../Utils/utils.h"

using namespace std;

//Classe Base
class Alimento {

    const char nome;
    int valorNutritivo,
        toxicidade,
        duracao;      //Tempo de Vida (mudei o nome porque e assim que lhe chamam no enunciado)
     vector<string> cheiros;


public:

    Alimento(char nome, int vNutritivo, int toxicidade, int duracao, vector<string> cheiros);
    virtual ~Alimento() = 0;

};


#endif //META_2_TP_COMIDA_H
