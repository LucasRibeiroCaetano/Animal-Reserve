#include "reserva.h"

Reserva::Reserva(int lar, int alt) : AVlar(), AValt(20){

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> size(16, 500);

    NC = size(gen);
    NL = size(gen);

    segmentos = new Segmento*[NC];

    for (int i = 0; i < NC; i++)
        segmentos[i] = new Segmento[NL];

    uniform_int_distribution<> AVlarDis(0, NC - AVlar);
    uniform_int_distribution<> AValtDis(0, NL - AValt);

    AVcseX = AVlarDis(gen);
    AVcseY = AValtDis(gen);

    AVlimX = AVcseX + AVlar;
    AVlimY = AVcseY + AValt;
}

Reserva::~Reserva() {

    for (int i = 0; i < NC; i++) {
        for (int j = 0; j < NL; j++)
            segmentos[i][j].~Segmento();

        delete[] segmentos[i];
    }

    delete[] segmentos;
}

int Reserva::getNL() const { return NL; }

int Reserva::getNC() const { return NC; }

Segmento **Reserva::getSegmentos() const{
    return segmentos;
}

int Reserva::getCseX() const {
    return AVcseX;
}

int Reserva::getCseY() const {
    return AVcseY;
}

int Reserva::getLimX() const {
    return AVlimX;
}

int Reserva::getLimY() const {
    return AVlimY;
}

void Reserva::mostraReserva() const{

    //Atualiza reserva
    //TODO: Este método irá verificar se na primeira posição do array de animais está algum animal se tiver,
    //      então o caracter a ser mostrado irá ser o caracter desse animal "animalEmCausa.getDisplay()".
    //      Se dentro do array de animais não estiver nada, vamos verificar se existe alguma comida.
    //      Se existir comida então mostramos o caractér da comida "comida.getDisplay()".

    for(int i = 0; i < NC; i++){

        for(int j = 0; j < NL; j++){

            if(segmentos[i][j].getListaAnimais() == nullptr && segmentos[i][j].getListaAlimento() == nullptr){

                segmentos[i][j].setDisplay('_');

            }

                //Se tiver animais
            else if(segmentos[i][j].getListaAnimais() != nullptr && segmentos[i][j].getListaAlimento() == nullptr){

                segmentos[i][j].setDisplay(segmentos[i][j].getListaAnimais()[0]->representacao);

            }
            else if(segmentos[i][j].getListaAnimais() == nullptr && segmentos[i][j].getListaAlimento() != nullptr){

                segmentos[i][j].setDisplay(segmentos[i][j].getListaAlimento()[0].tipo);

            }
        }

    }

    //Mostra a reserva atualizada
    for(int i = 0; i < NC; i++){

        for(int j = 0; j < NL; j++){

            cout << segmentos[i][j].getDisplay();

        }

        cout << '\n';
    }

}


