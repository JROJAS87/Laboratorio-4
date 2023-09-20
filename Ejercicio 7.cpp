// Ejercicio 7: Al enumerar los primeros seis números primos: 2, 3, 5, 7, 11 y 13, podemos ver que el sexto número primo es 13. ¿Cuál es el número primo 10001º?

// Rpta: 104743

#include <iostream>

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    if (numero <= 3) {
        return true;
    }

    if (numero % 2 == 0 || numero % 3 == 0) {
        return false;
    }

    int divisor = 5;
    while (divisor * divisor <= numero) {
        if (numero % divisor == 0 || numero % (divisor + 2) == 0) {
            return false;
        }
        divisor += 6;
    }

    return true;
}

int encontrarPrimoNumero(int n) {
    int contador = 0;
    int numero = 1;

    while (contador < n) {
        numero++;
        if (esPrimo(numero)) {
            contador++;
        }
    }

    return numero;
}

int main() {
    int n = 10001;
    int resultado = encontrarPrimoNumero(n);

    std::cout << "El " << n << "º número primo es: " << resultado << std::endl;

    return 0;
}
