// Ejercicio 3: Los factores primos de 13195 son 5, 7, 13 y 29. ¿Cuál es el factor primo más grande del número 600851475143?

// Rpta: 6857

#include <iostream>

int main() {
    long long numero = 600851475143;
    long long factorPrimoMasGrande = 0;

    // División por 2 hasta que sea impar
    while (numero % 2 == 0) {
        factorPrimoMasGrande = 2;
        numero /= 2;
    }

    // División por números impares
    for (long long i = 3; i * i <= numero; i += 2) {
        while (numero % i == 0) {
            factorPrimoMasGrande = i;
            numero /= i;
        }
    }

    // Si queda un número primo mayor que 1
    if (numero > 1) {
        factorPrimoMasGrande = numero;
    }

    std::cout << "El factor primo más grande de 600851475143 es: " << factorPrimoMasGrande << std::endl;

    return 0;
}
