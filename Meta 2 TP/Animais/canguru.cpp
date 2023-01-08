#include "canguru.h"

Canguru:: Canguru(int id, Reserva &reserva, string nome,  int linha, int coluna): Animal(id, nome, linha, coluna){
    especie = "canguru";
    representacao = 'G';
    peso = 10;
    saude = 20;
    fome = 0;
    tempoVida = 70;
    percecao = 7;

    reserva.getSegmentos()[linha][coluna].addAnimal(this);

    cout << "Canguru '" << nome << "' de id [" << id << "] foi criado. " << endl << "Display:" <<reserva.getSegmentos()[linha][coluna].getDisplay() << endl;
}

Canguru::~Canguru() {

    cout << "Canguru '" << nome << "' de id [" << id << "] morreu..." << endl;

}

void Canguru::movimento() {

    //animal::movimento();

}

void Canguru::alimentacao() {

    //animal::alimentacao();

}

void Canguru::interacao() {

    //animal::interacao();

}

void Canguru::reproduz() {

}
