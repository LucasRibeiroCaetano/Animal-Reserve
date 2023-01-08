#ifndef META_2_TP_ANIMAL_H
#define META_2_TP_ANIMAL_H

#include "../Utils/utils.h"
#include "../Reserva/reserva.h"

using namespace std;

//Classe Base
class Animal {

protected:

    string nome,
           especie;

    float peso;

    int saude,
        fome,
        id,
        linha,
        coluna,
        percecao;

    bool vivo;

    //Carater que representa visualmente o animal
    char representacao;

public:

    //Nasce -> Construtor
    Animal(int id, string nome, int linha = 0, int coluna = 0);
    virtual ~Animal();

    virtual void movimento() = 0;
    virtual void alimentacao() = 0;
    virtual void interacao() = 0;
    virtual void reproduz() = 0;
};


#endif //META_2_TP_ANIMAL_H
