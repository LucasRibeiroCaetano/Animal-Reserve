#ifndef META_2_TP_RESERVA_H
#define META_2_TP_RESERVA_H

#include "../Utils/utils.h"
#include "../Animais/animal.h"
#include "../Alimentos/alimento.h"

using namespace std;

class Reserva {

    //Valores Random entre 16 e 500
    int     NL,
            NC,

            //ID para todos os alimentos e animais
            ID,

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

public:

    Reserva(int largura, int altura);
    ~Reserva();

    //Getters
    int getCseX() const;
    int getCseY() const;
    int getLimX() const;
    int getLimY() const;
    int getNL() const;
    int getNC() const;
    int getID() const;

    const vector<Animal *> &getAnimais() const;

    //Setters
    void setID(int id);
    void setDisplayChar(char c, int x, int y);




    void mostraReserva() const;
    void addAnimal(Animal * animal);
    void addAlimento(Alimento * alimento);
};


#endif //META_2_TP_RESERVA_H
