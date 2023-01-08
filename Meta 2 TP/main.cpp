#include "Reserva/reserva.h"
#include "Utils/utils.h"

using namespace std;

int main() {
    int x, y;
    string input;

    cout << "\n(=====================|| Trabalho Final POO 2021/2022 ||=====================)" << endl;

    cout << "\nQual e a medida da area visivel que vai desejar (largura, altura)?\n>";

    while (true) {

        cin >> x >> y;

        if (!cin.fail()) {

            if (x > 500 || x <= 0 || y > 500 || y <= 0) {

                // Input mal sucedido
                cout << "Escolha numeros maiores que 0 e menores ou igual a 500\n>";

                //Limpar as flags do cin
                cin.clear();

                //Ignora todos os caracteres até ao '\n'
                cin.ignore(numeric_limits<streamsize>::max(), '\n');

                continue;
            }

            //Input bem sucedido
            break;
        }

        // Input mal sucedido
        cout << "Input Invalido. Tente Novamente...\n>";

        //Limpar as flags do cin
        cin.clear();

        //Ignora todos os caracteres até ao '\n'
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }

    Reserva reserva(x, y);

    cout << "\n";

    cout << "Informacao da Reserva: \n\n" << "NC:" << reserva.getNC()  << endl << "NL:" << reserva.getNL()  << endl << "CseX: " << reserva.getCseX() << "\nCseY: " << reserva.getCseY() << "\nLimX: " << reserva.getLimX() << "\nLimY: " << reserva.getLimY() <<  endl;

    reserva.mostraReserva();

    return 0;
}
