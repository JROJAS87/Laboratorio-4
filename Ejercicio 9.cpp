// Ejercicio 9: Un triplete pitagórico es un conjunto de tres números naturales, a<b<c, para los cuales se cumple: a^2 + b^2 = c^2. Por ejemplo, 3^2 + 4^2 = 9 + 16 = 25 = 5^2. Existe exactamente un triplete pitagórico para el cual a + b + c = 1000. Encuentra el producto abc.

// Rpta: 31875000

#include <iostream>

int main() {
    int a, b, c;

    for (a = 1; a < 1000; a++) {
        for (b = a + 1; b < 1000; b++) {
            c = 1000 - a - b;
            
            if (a * a + b * b == c * c) {
                int producto = a * b * c;
                std::cout << "Los valores de a, b y c son: " << a << ", " << b << ", " << c << std::endl;
                std::cout << "El producto abc es: " << producto << std::endl;
                return 0;
            }
        }
    }

    std::cout << "No se encontraron valores de a, b y c que cumplan con las condiciones dadas." << std::endl;
    return 0;
}
