#include <iostream>

bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int encontrarPrimoEnPosicion(int posicion) {
    if (posicion <= 0) {
        return -1;
    }

    int contadorPrimos = 0;
    int numeroActual = 2;

    while (contadorPrimos < posicion) {
        if (esPrimo(numeroActual)) {
            contadorPrimos++;
        }
        if (contadorPrimos < posicion) {
            numeroActual++;
        }
    }

    return numeroActual;
}

int main() {
    int posicion;
    std::cout << "Ingrese la posición para encontrar el número primo correspondiente: ";
    std::cin >> posicion;

    int numeroPrimo = encontrarPrimoEnPosicion(posicion);

    if (numeroPrimo != -1) {
        std::cout << "El número primo en la posición " << posicion << " es: " << numeroPrimo << std::endl;
    } else {
        std::cout << "La posición ingresada no es válida." << std::endl;
    }

    return 0;
}
