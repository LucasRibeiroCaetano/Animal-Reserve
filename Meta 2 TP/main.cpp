#include "Utils/utils.h"
#include "Animais/animal.h"
#include "Alimentos/alimento.h"
#include "Reserva/reserva.h"


using namespace std;

int main() {
    Reserva reserva;
    areaVisivel area(const Reserva &reserva);

    cout << "Dimensão da área Visível: " << area.getCseX() << endl;


    //Caralho

    return 0;
}
