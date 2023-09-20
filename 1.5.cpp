#include <iostream>

long long calcularMCM(int rango) {
    long long mcm = 1;

    for (int i = 2; i <= rango; ++i) {

        long long producto = mcm * i;

        long long a = mcm;
        long long b = i;
        long long temp;
        while (b != 0) {
            temp = b;
            b = a % b;
            a = temp;
        }

        mcm = producto / a;
    }

    return mcm;
}

int main() {
    int rango = 20;
    long long resultado = calcularMCM(rango);

    std::cout << "El múltiplo más pequeño divisible por todos los números en el rango [1, " << rango << "] es: " << resultado << std::endl;

    return 0;
}
