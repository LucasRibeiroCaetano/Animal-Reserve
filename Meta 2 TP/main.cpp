#include "Reserva/reserva.h"
#include "Utils/utils.h"

using namespace std;

int main() {

    Reserva reserva(20, 50);

    reserva.mostraReserva();

    cout << "Informacao da Reserva: \nCseX: " << reserva.getCseX() << "\nCseY: " << reserva.getCseY() << "\nLimX: " << reserva.getLimX() << "\nLimY: " << reserva.getLimY() <<  endl;



    return 0;
}
