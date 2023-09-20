// Ejercicio 2: Cada nuevo término en la secuencia de Fibonacci se genera sumando los dos términos anteriores. Al comenzar con 1 y 2, los primeros n términos serán: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,... Al considerar los términos en la secuencia de Fibonacci cuyos valores no superan los 4 000 000, encuentra la suma de los términos con valores pares.

// Rpta: 4613732

#include <iostream>

int main() {
    int limite;
    
    std::cout << "Ingrese el límite: ";
    std::cin >> limite;

    int a = 1, b = 2;  
    int suma = 0;

    while (b <= limite) {
        if (b % 2 == 0) {
            suma += b;  
        }
        int siguiente = a;
        a = b;
        b = siguiente + b;  
    }

    std::cout << "La suma de los términos pares de Fibonacci por debajo de " << limite << " es: " << suma << std::endl;

    return 0;
}
