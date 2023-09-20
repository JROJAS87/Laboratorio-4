// Ejercicio 4: Un número palindrómico se lee igual en ambos sentidos. El palíndromo más grande formado por el producto de dos números de dos dígitos es 9009 = 91 x 99. Encuentra el palíndromo más grande formado por el producto de dos números de tres dígitos.

// Rpta: 906609

#include <iostream>

bool esPalindromo(int numero) {
    int original = numero;
    int reverso = 0;

    while (numero > 0) {
        int digito = numero % 10;
        reverso = reverso * 10 + digito;
        numero /= 10;
    }

    return original == reverso;
}

int main() {
    int maxPalindromo = 0;

    for (int i = 100; i <= 999; i++) {
        for (int j = 100; j <= 999; j++) {
            int producto = i * j;
            if (esPalindromo(producto) && producto > maxPalindromo) {
                maxPalindromo = producto;
            }
        }
    }

    std::cout << "El palíndromo más grande que se puede obtener al multiplicar dos números de tres dígitos es: " << maxPalindromo << std::endl;

    return 0;
}
