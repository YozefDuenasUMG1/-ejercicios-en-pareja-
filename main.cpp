#include <iostream>

using namespace std;

int main() {
    cout << "Te gustaria saber el producto de los primeros 10 numeros naturales?" << endl;
    cout << "De todas maneras te lo voy a mostrar :>" << endl;
    int producto = 1;

    int contador = 1;

    while (contador <= 10) {
        producto *= contador;
        contador++;
    }
    cout << "El producto de los primeros diez numeros naturales es: " << producto << endl;
    cout << "Chao, espero haberte ayudado colega :D" << endl;

    return 0;
}

