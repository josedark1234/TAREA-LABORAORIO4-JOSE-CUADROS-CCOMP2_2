#include <iostream>

bool esPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numero;
    std::cout << "Ingrese un número para calcular la suma de todos los primos en el rango [1, N]: ";
    std::cin >> numero;

    if (numero < 2) {
        std::cout << "No hay números primos en el rango [1, " << numero << "]." << std::endl;
        return 1;
    }

    long long sumaPrimos = 0;

    for (int i = 2; i <= numero; ++i) {
        if (esPrimo(i)) {
            sumaPrimos += i;
        }
    }

    std::cout << "La suma de todos los números primos en el rango [1, " << numero << "] es: " << sumaPrimos << std::endl;

    return 0;
}
