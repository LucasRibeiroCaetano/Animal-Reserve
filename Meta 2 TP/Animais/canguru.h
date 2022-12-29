#ifndef META_2_TP_Canguru_H
#define META_2_TP_Canguru_H

#include "animal.h"
#include "../Utils/utils.h"

class Canguru : Animal{

    int tempoVida;

public:

    //Nasce -> Construtor
    Canguru(int id, string nome = "Julio", int linha = 0, int coluna = 0);

    //Morre -> Destrutor
    ~Canguru() override;

    void movimento() override;
    void alimentacao() override;
    void interacao() override;

    void reproduz() overrride;  //nasce um novo canguru a cada 30 instantes. Ao nascer fica a menos de 3 posições de distancia(linha coluna)


};


#endif //META_2_TP_Canguru_H
