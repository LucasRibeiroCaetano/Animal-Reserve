#include "ovelha.h"

Ovelha:: Ovelha(int id, Reserva &reserva, string nome, int x, int y): Animal(id, nome, x, y){

    especie = "ovelha";
    representacao = 'O';
    peso = (rand() % 8) + 4;
    saude = 30;
    fome = 0;
    tempoVida = 35;
    cheiroAgradavel = "erva";
    percecao = 3;

    reserva.getSegmentos()[linha][coluna].addAnimal(this);

    cout << "Ovelha '" << nome << "' de id [" << id << "] foi criada. " << endl << "Display:" <<reserva.getSegmentos()[linha][coluna].getDisplay() << endl;
}


Ovelha::~Ovelha() {
    cout << "Ovelha '" << nome << "' de id [" << id << "] morreu..." << endl;
}

void Ovelha::movimento() {

    //animal::movimento();

}

void Ovelha::alimentacao() {

    //animal::alimentacao();

}

void Ovelha::interacao() {

    //animal::interacao();

}
