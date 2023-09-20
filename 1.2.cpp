#include <iostream>

int main() {
    int a = 1;
    int b = 2;
    int suma = 0;

    while (b <= 4000000) {
        if (b % 2 == 0) { 
            suma += b;
        }
        int siguiente = a + b;
        a = b;
        b = siguiente;
    }

    std::cout << "La suma de los términos pares de Fibonacci menores o iguales a 4 millones es: " << suma << std::endl;
    return 0;
}
