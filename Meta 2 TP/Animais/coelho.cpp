#include "coelho.h"

Coelho::Coelho(int id, Reserva &reserva, string nome, int x, int y): Animal(id, nome, x, y){

    especie = "coelho";
    representacao = 'C';
    peso = (rand() % 4) + 1;
    saude = 20;
    fome = 0;
    tempoVida = 30;
    cheiroAgradavel = "verdura";
    percecao = 4;

    reserva.getSegmentos()[linha][coluna].addAnimal(this);

    cout << "Coelho '" << nome << "' de id [" << id << "] foi criado. " << endl << "Display:" <<reserva.getSegmentos()[linha][coluna].getDisplay() << endl;
}

Coelho::~Coelho() {

    cout << "Coelho '" << nome << "de id [" << id << "] morreu..." << endl;

}

void Coelho::interacao() {

    //animal::interacao();

}

void Coelho::movimento() {

    //animal::movimento();

}

void Coelho::alimentacao() {

    //animal::alimentacao();

}
