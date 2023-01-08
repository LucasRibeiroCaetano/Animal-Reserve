#ifndef META_2_TP_OVELHA_H
#define META_2_TP_OVELHA_H

#include "animal.h"
#include "../Utils/utils.h"
#include "../Reserva/reserva.h"

using namespace std;

class Ovelha : Animal{
    int tempoVida;
    string cheiroAgradavel;
public:

    //Nasce -> Construtor
    Ovelha(int id, Reserva &reserva, string nome = "Gertrudes", int x = 0, int y = 0);

    //Morre -> Destrutor
    ~Ovelha();

    void movimento() override;
    void alimentacao() override;
    void interacao() override;

    void reproduz() override;  // //Nasce uma nova ovelha a cada 15 instantes. Ao nascer fica a menos de 12 posições de distancia(linha coluna)


};


#endif //META_2_TP_OVELHA_H
