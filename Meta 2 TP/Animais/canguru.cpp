#include "canguru.h"

Canguru:: Canguru(int id, string nome, int linha, int coluna): Animal(id, nome, linha, coluna){
    especie = "canguru";
    representacao = 'G';
    peso = 10;
    saude = 20;
    fome = 0;
    tempoVida = 70;
    percecao = 7;
    cout << "Canguru '" << nome << "' de id [" << id << "] foi criado." << endl;
}

Canguru::~Canguru() {

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
