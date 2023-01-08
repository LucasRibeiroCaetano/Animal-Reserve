#include "reserva.h"

Reserva::Reserva(int lar, int alt) : AVlar(lar), AValt(alt){

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> sizeNC(AVlar, 500);
    uniform_int_distribution<> sizeNL(AValt, 500);

    NC = sizeNC(gen);
    NL = sizeNL(gen);

    //Alocar o tamanho de displayChar
    displayChar = new char*[NC];
    for (int i = 0; i < NC; i++) {
        displayChar[i] = new char[NL];
    }

    uniform_int_distribution<> AVlarDis(0, NC - AVlar);
    uniform_int_distribution<> AValtDis(0, NL - AValt);

    AVcseX = AVlarDis(gen);
    AVcseY = AValtDis(gen);

    AVlimX = AVcseX + AVlar;
    AVlimY = AVcseY + AValt;
}

Reserva::~Reserva() {

    for (Alimento *alimento: alimentos)
        delete alimento;

    for (Animal *animal: animais)
        delete animal;

    for (int i = 0; i < NC; i++) {
        delete [] displayChar[i];
    }
    delete [] displayChar;

}

int Reserva::getNL() const { return NL; }

int Reserva::getNC() const { return NC; }

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

    /*
        |=| Atualiza reserva |=|
        Este loop irá verificar se na primeira posição do array de animais está algum animal se tiver,
        então o caracter a ser mostrado irá ser o caracter desse animal "animalEmCausa.getDisplay()".
        Se dentro do array de animais não estiver nada, vamos verificar se existe alguma comida.
        Se existir comida então mostramos o caractér da comida "comida.getDisplay()".
     */

    cout << "\n\n";

    for (int i = 0; i < NC; i++) {

        for (int j = 0; j < NL; j++) {

            //Se não houver comidas nem animais, preenche a reserva toda a '_'
            if(animais.empty() && alimentos.empty()){
                for(int aux = 0; aux < NC; aux++)
                    for(int aux1 = 0; aux1 < NL; aux1++)
                        displayChar[aux][aux1] = '_';
            }

            else{
                for (int k = 0; k < NC * NL; k++){

                    //Se houver um animal nessa posição, mostra o caracter do animal,
                    //como a pesquisa é feita de forma sequencial, a partir do momento
                    //em que encontramos um animal numa localização ele mostra logo o
                    //caracter desse animal. Pois foi o primeiro a ser inserido no vetor
                    //ou seja, consequentemente, o primeiro inserido nessa posição
                    if (animais[k]->getX() == i && animais[k]->getY() == j)
                        displayChar[i][j] = animais[k]->getChar();

                    //Se houver um alimento nessa posição, etc
                    else if (alimentos[k]->getX() == i && alimentos[k]->getY() == j)
                        displayChar[i][j] = alimentos[k]->getChar();
                }

            }

        }
    }

    for(int i = 0; i <= AVlar * 4; i++)
        cout << "=";

    cout << endl;

    //Mostra a reserva atualizada
    for(int i = AVcseY; i < AVlimY; i++){

        for(int j = AVcseX; j < AVlimX; j++){

            if (j == AVcseX)
                cout << "| ";

            else
                cout << " | ";

            cout << displayChar[j][i];

            if(j == AVlimX -1)
                cout << " |";
        }


        cout << '\n';
    }

    for(int i = 0; i <= AVlar * 4; i++)
        cout << "=";

    cout << "\n\n";
}

void Reserva::addAnimal(Animal *animal) {
    animais.push_back(animal);
}

void Reserva::addAlimento(Alimento *alimento) {
    alimentos.push_back(alimento);
}


