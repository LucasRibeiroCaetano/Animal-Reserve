#include "coelho.h"

Coelho:: Coelho(int id, string nome, int linha, int coluna): Animal(id, nome, linha, coluna){
    especie = "coelho";
    representacao = 'C';
    peso = (rand() % 4) + 1;
    saude = 20;
    fome = 0;
    tempoVida = 30;
    cheiroAgradavel = "verdura";
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

void Coelho::alimentacao() {

    //animal::alimentacao();

}
