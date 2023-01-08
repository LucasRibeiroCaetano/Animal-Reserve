#include "lobo.h"

Lobo:: Lobo(int id, Reserva &reserva, string nome, int linha, int coluna): Animal(id, nome, linha, coluna){
    especie = "lobo";
    representacao = 'L';
    peso = 15;
    saude = 25;
    fome = 0;
    cheiroAgradavel = "carne";
    instanteNovoNasc = (rand() % 40) + 5;
    percecao = 5;

    reserva.getSegmentos()[linha][coluna].addAnimal(this);

    cout << "Lobo '" << nome << "' de id [" << id << "] foi criado. " << endl << "Display:" <<reserva.getSegmentos()[linha][coluna].getDisplay() << endl;
}

Lobo::~Lobo() {
    cout << "Lobo '" << nome << "' de id [" << id << "] morreu..." << endl;
}

void Lobo::movimento() {

    //animal::movimento();

}

void Lobo::alimentacao() {

    //animal::alimentacao();

}

void Lobo::interacao() {

    //animal::interacao();

}
