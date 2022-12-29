#ifndef META_2_TP_LOBO_H
#define META_2_TP_LOBO_H

#include "animal.h"
#include "../Utils/utils.h"

using namespace std;

class Lobo : Animal{

    int instanteNovoNasc;
    string cheiroAgradavel;

public:

    //Nasce -> Construtor
    Lobo(int id, string nome = "Quim", int linha = 0, int coluna = 0);

    //Morre -> Destrutor
    ~Lobo() override;

    void movimento() override;
    void alimentacao() override;
    void interacao() override;

    void reproduz() override;  //nasce um lobo no instante predefenido no construtor. Ao nascer fica a menos de 15 posições de distancia(linha coluna)


};


#endif //META_2_TP_LOBO_H
