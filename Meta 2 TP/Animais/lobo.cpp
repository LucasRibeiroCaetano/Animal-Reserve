#include "lobo.h"

Lobo:: Lobo(int id, string nome, int x, int y): Animal(id, nome, x, y){
    especie = "lobo";
    representacao = 'L';
    peso = 15;
    saude = 25;
    fome = 0;
    cheiroAgradavel = "carne";
    instanteNovoNasc = (rand() % 40) + 5;
    percecao = 5;

    cout << "Lobo '" << nome << "' de id [" << id << "] foi criado. " << endl << "Display:" << representacao << endl;
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
