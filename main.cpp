#include <iostream>

int main() {
    int numero, contadorPrimos = 0;

    // Bucle para recorrer los números del 2 al 100
    for (numero = 2; numero <= 100; numero++) {
        bool esPrimo = true;

        // Bucle para comprobar si el número es divisible por algún número entre 2 y su raíz cuadrada
        for (int divisor = 2; divisor * divisor <= numero; divisor++) {
            if (numero % divisor == 0) {
                esPrimo = false;
                break;
            }
        }

        // Si el número es primo, se imprime y se aumenta el contador
        if (esPrimo) {
            std::cout << numero << " ";
            contadorPrimos++;

            // Se comprueba si ya se han encontrado los 10 números primos
            if (contadorPrimos == 10) {
                break;
            }
        }
    }

    std::cout << std::endl;

    return 0;
}