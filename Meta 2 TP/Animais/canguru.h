#ifndef META_2_TP_Canguru_H
#define META_2_TP_Canguru_H

#include "animal.h"
#include "../Utils/utils.h"
#include "../Reserva/reserva.h"

class Canguru : Animal{

    int tempoVida;

public:

    //Nasce -> Construtor
    Canguru(int id, int x = 0, int y = 0, const string& nome = "Julio");

    //Morre -> Destrutor
    ~Canguru();

    void movimento() override;
    void alimentacao() override;
    void interacao() override;

    void reproduz() override;  //nasce um novo canguru a cada 30 instantes. Ao nascer fica a menos de 3 posições de distancia(linha coluna)


};


#endif //META_2_TP_Canguru_H
