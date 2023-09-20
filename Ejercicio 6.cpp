// Ejercicio 6: La suma de los cuadrados de los primeros diez números naturales es, 1^2 + 2^2 +.... +10^2 = 385. El cuadrado de la suma de los primeros diez números naturales es, (1^2 + 2^2 +........+ 10)^2 = 55^2 = 3025. Por lo tanto, la diferencia entre la suma de los cuadrados de los primeros diez números naturales y el cuadrado de la suma es 3025 - 385 = 2640. Encuentra la diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma.

// Rpta: 25164150

#include <iostream>

int main() {
    int suma_de_los_cuadrados = 0;
    int suma = 0;

    // Calcular la suma de los cuadrados y la suma de los números
    for (int i = 1; i <= 100; i++) {
        suma_de_los_cuadrados += i * i;
        suma += i;
    }

    int cuadrado_de_la_suma = suma * suma;
    int diferencia = cuadrado_de_la_suma - suma_de_los_cuadrados;

    std::cout << "La suma de los cuadrados de los primeros cien números naturales es: " << suma_de_los_cuadrados << std::endl;
    std::cout << "El cuadrado de la suma de los primeros cien números naturales es: " << cuadrado_de_la_suma << std::endl;
    std::cout << "La diferencia entre la suma de los cuadrados y el cuadrado de la suma es: " << diferencia << std::endl;

    return 0;
}
