#ifndef META_2_TP_RESERVA_H
#define META_2_TP_RESERVA_H

#include "../Utils/utils.h"
#include "segmento.h"

using namespace std;

class Reserva {

    //Valores Random entre 16 e 500
    int     NL,
            NC,

            //Variáveis da Área Visível
            AVlar,
            AValt,
            AVcseX,
            AVcseY,
            AVlimX,
            AVlimY;

    //Vetores que vão armazenar a informação
    vector< Alimento* > alimentos;
    vector< Animal* > animais;

    //Array que guarda os caracteres a serem mostrados
    char displayChar[NC][NL];


public:

    Reserva(int largura, int altura);
    ~Reserva();

    int getCseX() const;
    int getCseY() const;
    int getLimX() const;
    int getLimY() const;
    int getNL() const;
    int getNC() const;

    void mostraReserva() const;
    void addAnimal(Animal * animal);
    void addAlimento(Alimento * alimento);
};


#endif //META_2_TP_RESERVA_H
