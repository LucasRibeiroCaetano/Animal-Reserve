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

    cout << "cseX: " << area.getCseX() << endl;
    cout << "cseY: " << area.getCseY() << endl;

    cout << "limX: " << area.getLimX() << endl;
    cout << "limY: " << area.getLimY() << endl;

    return 0;
}
