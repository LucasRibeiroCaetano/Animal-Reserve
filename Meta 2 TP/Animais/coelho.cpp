#include "coelho.h"

Coelho:: Coelho(int id,string nome, int linha, int coluna): Animal(id, nome, linha, coluna){
    especie = "coelho";
    representacao = 'C';
    peso = (rand() % 4) + 1;
    saude = 20;
    fome = 0;
    tempoVida = 30;
    cheirosAgradaveis[0] = "verdura";
    cout << "Coelho '" << nome << "' de id [" << id << "] foi criado." << endl;
}

Coelho::~Coelho() {

}

void Coelho::interacao() {

    //animal::interacao();

}

void Coelho::movimento() {

    //animal::movimento();

}

void coelho::alimentacao() {

    //animal::alimentacao();

}
