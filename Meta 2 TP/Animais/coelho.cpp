#include "coelho.h"

Coelho::Coelho(int id, string nome, int x, int y): Animal(id, nome, x, y){

    especie = "coelho";
    representacao = 'C';
    peso = (rand() % 4) + 1;
    saude = 20;
    fome = 0;
    tempoVida = 30;
    cheiroAgradavel = "verdura";
    percecao = 4;

    cout << "Coelho '" << nome << "' de id [" << id << "] foi criado. " << endl << "Display:" << representacao << endl;
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

void Coelho::reproduz() {

    //animal::alimentacao();

}
