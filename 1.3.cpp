#include <iostream>

long long encontrarMayorPrimoFactor(long long numero) {
    long long mayorPrimoFactor = -1;

    while (numero % 2 == 0) {
        mayorPrimoFactor = 2;
        numero /= 2;
    }

    for (long long i = 3; i * i <= numero; i += 2) {
        while (numero % i == 0) {
            mayorPrimoFactor = i;
            numero /= i;
        }
    }

    if (numero > 1) {
        mayorPrimoFactor = numero;
    }

    return mayorPrimoFactor;
}

int main() {
    long long numero = 600851475143;

    long long mayorPrimoFactor = encontrarMayorPrimoFactor(numero);

    if (mayorPrimoFactor != -1) {
        std::cout << "El mayor factor primo de " << numero << " es: " << mayorPrimoFactor << std::endl;
    } else {
        std::cout << "No se encontraron factores primos en " << numero << "." << std::endl;
    }

    return 0;
}