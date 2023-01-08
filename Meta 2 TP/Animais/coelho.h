#ifndef META_2_TP_COELHO_H
#define META_2_TP_COELHO_H

#include "animal.h"
#include "../Utils/utils.h"
#include "../Reserva/reserva.h"

using namespace std;

class Coelho : Animal{

    int tempoVida;
    string cheiroAgradavel;

public:

    //Nasce -> Construtor
    Coelho(int id, string nome = "Roberto", int x = 0, int y = 0);

    //Morre -> Destrutor
    ~Coelho();

    void movimento() override;
    void alimentacao() override;
    void interacao() override;

    void reproduz() override;  //pode nascer um novo coelho a cada 8 instantes com probabilidade de 50%. Ao nascer fica a menos de 10 posições de distancia(linha coluna)

};


#endif //META_2_TP_COELHO_H
