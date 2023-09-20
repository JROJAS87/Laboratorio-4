// Ejercicio 5: 2050 es el número más pequeño que se puede dividir por cada uno de los números del 1 al 10 sin dejar ningún residuo. ¿Cuál es el número positivo más pequeño que es uniformemente divisible por todos los números del 1 al 20?

// Rpta: 232792560

#include <iostream>

long long calcularMCD(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long calcularMCM(long long a, long long b) {
    return (a * b) / calcularMCD(a, b);
}

long long calcularMCMDe1aN(int n) {
    long long mcm = 1;
    for (int i = 2; i <= n; i++) {
        mcm = calcularMCM(mcm, i);
    }
    return mcm;
}

int main() {
    int limite;
    std::cout << "Introduce el límite: ";
    std::cin >> limite;

    long long resultado = calcularMCMDe1aN(limite);

    std::cout << "El número positivo más pequeño divisible por todos los números del 1 al " << limite << " es: " << resultado << std::endl;

    return 0;
}