#include "bife.h"

Bife:: Bife(int id, Reserva &reserva, int linha, int coluna): Alimento(id, reserva, linha, coluna){

    tipo = 'b';
    valorNutritivo = 10;
    toxicidade = 2; //constante
    duracao = 30;
    cheiros[0] = "carne";
    cheiros[1] = "ketchup";

    cout << "Bife de id [" << id << "] foi criado. " << " Valor Nutritivo:" << valorNutritivo << ", Toxicidade:" << toxicidade << endl << ", Display:" <<reserva.getSegmentos()[linha][coluna].getDisplay() << endl;
}

Bife::~Bife() {

}
