#ifndef META_2_TP_COELHO_H
#define META_2_TP_COELHO_H

#include "animal.h"
#include "../Utils/utils.h"

using namespace std;

class Coelho : Animal{

public:

    //Nasce -> Construtor
    Coelho(int id,string nome = "Roberto", int linha = 0, int coluna = 0);

    //Morre -> Destrutor
    ~Coelho() override;

    void movimento() override;
    void alimentacao() override;
    void interacao() override;

    void reproduz();  //pode nascer um novo coelho a cada 8 instantes com probabilidade de 50%. Ao nascer fica a menos de 10 posições de distancia(linha coluna)

};


#endif //META_2_TP_COELHO_H
