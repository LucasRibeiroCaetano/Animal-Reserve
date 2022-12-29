#include "ovelha.h"

Ovelha:: Ovelha(int id, string nome, int linha, int coluna): Animal(id, nome, linha, coluna){
    especie = "ovelha";
    representacao = 'O';
    peso = (rand() % 8) + 4;
    saude = 30;
    fome = 0;
    tempoVida = 35;
    cheirosAgradaveis[0] = "erva";
    cout << "Ovelha '" << nome << "' de id [" << id << "] foi criada." << endl;
}


Ovelha::~Ovelha() {

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
