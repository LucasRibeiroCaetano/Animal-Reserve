#ifndef META_2_TP_LOBO_H
#define META_2_TP_LOBO_H

#include "animal.h"
#include "../Utils/utils.h"
#include "../Reserva/reserva.h"

using namespace std;

class Lobo :public Animal{

    int instanteNovoNasc;
    string cheiroAgradavel;

public:

    //Nasce -> Construtor
    Lobo(int id, int x = 0, int y = 0, const string& nome = "Quim");

    //Morre -> Destrutor
    ~Lobo();

    void movimento() override;
    void alimentacao() override;
    void interacao() override;

    void reproduz() override;  //nasce um lobo no instante predefenido no construtor. Ao nascer fica a menos de 15 posições de distancia(linha coluna)


};


#endif //META_2_TP_LOBO_H
