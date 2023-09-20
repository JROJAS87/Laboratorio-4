// Ejercicio 1: Si enumeramos todos los números naturales por debajo de 10 que son múltiplos de 3 o 5, obtenemos 3, 5, 6 y 9. La suma de estos múltiplos es 23. Encuentra la suma de todos los múltiplos de 3 o 5 por debajo de 1000.

// Rpta: 233168

#include <iostream>

int main() {
    int suma = 0;

    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            suma += i;
        }
    }

    std::cout << "La suma de los múltiplos de 3 o 5 por debajo de 1000 es: " << suma << std::endl;

    return 0;
}
