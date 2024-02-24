#include <iostream>

int main() {
    float precioOriginal, descuento, precioFinal;

    // Solicitar el precio original y el descuento al usuario
    std::cout << "Ingrese el precio original del producto: ";
    std::cin >> precioOriginal;

    std::cout << "Ingrese el porcentaje de descuento: ";
    std::cin >> descuento;

    // Calcular el descuento
    descuento = precioOriginal * (descuento / 100);

    // Calcular el precio final
    precioFinal = precioOriginal - descuento;

    // Mostrar el precio original, el descuento, y el precio final
    std::cout << "Precio original: Q" << precioOriginal << std::endl;
    std::cout << "Descuento: Q" << descuento << std::endl;
    std::cout << "Precio final: Q" << precioFinal << std::endl;

}
