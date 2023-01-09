#include "ovelha.h"

Ovelha:: Ovelha(int id, int x, int y, const string& nome): Animal(id, x, y, nome){

    especie = "ovelha";
    representacao = 'O';
    peso = (rand() % 8) + 4;
    saude = 30;
    fome = 0;
    tempoVida = 35;
    cheiroAgradavel = "erva";
    percecao = 3;

    cout << "Ovelha '" << nome << "' de id[" << id << "] foi criada. " << endl << "Display: " << representacao << endl;
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

void Ovelha::reproduz() {

}
