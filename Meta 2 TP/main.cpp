#include "Reserva/reserva.h"
#include "Utils/utils.h"
#include "Reserva/areaVisivel.h"

using namespace std;

int main() {

    Reserva reserva;
    Reserva::instance = &reserva;
    areaVisivel area;

    area.mostraReserva(reserva);

    cout << "Informacao da Reserva: \nCseX: " << area.getCseX() << "\nCseY: " << area.getCseY() << "\nLimX: " << area.getLimX() << "\nLimY: " << area.getLimY() <<  endl;



    return 0;
}
