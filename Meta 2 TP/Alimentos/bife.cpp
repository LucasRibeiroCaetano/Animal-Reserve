#include "bife.h"

Bife:: Bife(char nome, int vNutritivo, int toxicidade, int duracao, vector<string> cheiros): Alimento(nome, vNutritivo, toxicidade, duracao, cheiros){
    nome = 'b';
    vNutritivo = 10; // diminui 1 a cada instante
    toxicidade = 2; //constante
    duracao = 30;
    cheiros[0] = "carne"; //Constante - Tem sempre cheiro mesmo nao tendo valor nutritivo
    cheiros[1] = "ketchup";
}

Bife::~Bife() {

}
