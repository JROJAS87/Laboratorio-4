// Ejercicio 10: La suma de los números primos por debajo de 10 es 2+3+5+7=17. Encuentra la suma de todos los números primos por debajo de dos millones.

// Rpta: 142913828922

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

int main() {
    int limite;
    
    std::cout << "Introduce un número para calcular la suma de todos los números primos que sean menores que él: ";
    std::cin >> limite;

    long long sumaPrimos = 0;

    for (int i = 2; i < limite; i++) {
        if (esPrimo(i)) {
            sumaPrimos += i;
        }
    }

    std::cout << "La suma de todos los números primos por debajo de " << limite << " es: " << sumaPrimos << std::endl;

    return 0;
}
