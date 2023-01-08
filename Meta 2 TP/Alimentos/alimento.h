#ifndef META_2_TP_ALIMENTO_H
#define META_2_TP_ALIMENTO_H

#include "../Utils/utils.h"
#include "../Reserva/reserva.h"

using namespace std;

//Classe Base
class Alimento {

protected:


    int id,
        valorNutritivo,
        toxicidade,
        duracao,
        x,
        y;

    vector<string> cheiros;

public:

    char tipo;

    Alimento(int id, int x, int y);
    Alimento(int id, int x , int y, int valorNutritivo, int toxicidade);

    virtual ~Alimento() = 0;

    char getChar() const;
    int getX() const;
    int getY() const;

};


#endif //META_2_TP_ALIMENTO_H
