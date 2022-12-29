#ifndef META_2_TP_OVELHA_H
#define META_2_TP_OVELHA_H

#include "animal.h"
#include "../Utils/utils.h"

using namespace std;

class Ovelha : Animal{

    int tempoVida;

public:

    //Nasce -> Construtor
    Ovelha(int id, string nome = "Gertrudes", int linha = 0, int coluna = 0);

    //Morre -> Destrutor
    ~Ovelha() override;

    void movimento() override;
    void alimentacao() override;
    void interacao() override;

    void reproduz();  //Nasce uma nova ovelha a cada 15 instantes. Ao nascer fica a menos de 12 posições de distancia(linha coluna)


};


#endif //META_2_TP_OVELHA_H
