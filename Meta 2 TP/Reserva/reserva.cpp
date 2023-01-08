#include "reserva.h"

Reserva::Reserva(int lar, int alt) : AVlar(lar), AValt(alt), ID(0){

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

    //Imprime Reserva
    for (int i = 0; i < (AVlimX - AVcseX) * 4 + 1; i++) {
        cout << '=';
    }

    cout << endl;

    for (int i = AVcseY; i < AVlimY; i++) {
        if (i != AVcseY) {
            for (int j = 0; j < (AVlimX - AVcseX) * 4 + 1; j++) {
                cout << '-';
            }
            cout << endl;
        }
        for (int j = AVcseX; j < AVlimX; j++) {
            if (j == AVcseX) cout << "| ";
            char c = '_';
            for (Alimento * a : alimentos) {
                if (a->getX() == j && a->getY() == i) {
                    c = a->getChar();
                    break;
                }
            }
            if (c == '_') {
                for (Animal * a : animais) {
                    if (a->getX() == j && a->getY() == i) {
                        c = a->getChar();
                        break;
                    }
                }
            }
            cout << c << " | ";
        }
    }

    for (int i = 0; i < (AVlimX - AVcseX) * 4 + 1; i++) {
        cout << '=';
    }
    cout << endl;

    cout << "\n\n";
}

void Reserva::addAnimal(Animal *animal) {
    animais.push_back(animal);
}

void Reserva::addAlimento(Alimento *alimento) {
    alimentos.push_back(alimento);
}

int Reserva::getID() const {
    return ID;
}

void Reserva::setID(int id) {
    ID = id;
}

const vector<Animal *> &Reserva::getAnimais() const {
    return animais;
}


