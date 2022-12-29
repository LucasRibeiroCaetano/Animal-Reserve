#ifndef META_2_TP_ANIMAL_H
#define META_2_TP_ANIMAL_H

#include "../Utils/utils.h"

using namespace std;

//Classe Base
class Animal {
protected:
    string nome,
           especie;
    char representacao; // carater que representa visualmente o animal
    float peso;
    int saude,
        fome,
        id,
        linha,
        coluna;
    bool vivo; //pra que isto? i mean quando morre desaparece nao? ou tranforma-se num corpo... Mas nesse caso criamos um alimento de tipo corpo nao?
    vector<string> cheirosAgradaveis; // Cheiros que gosta, come


public:
    //Nasce -> Construtor
    Animal(int id,string nome, int linha = 0, int coluna = 0);
    virtual ~Animal() = 0;


    virtual void movimento() = 0;
    virtual void alimentacao() = 0;
    virtual void interacao() = 0;

};


#endif //META_2_TP_ANIMAL_H
