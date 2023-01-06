#include "Utils/utils.h"
#include "Animais/animal.h"
#include "Alimentos/alimento.h"
#include "Reserva/reserva.h"
#include "Reserva/areaVisivel.h"


using namespace std;

int main() {

    Reserva reserva;
    Reserva::instance = &reserva;
    areaVisivel area;

    cout << area.getCseX();

    cout << "Dimensão da área Visível: " << area.getCseX() << endl;

    return 0;
}
