#include <iostream>

int main() {
    float num1, num2, suma;
    
    std::cout << "Introduce un numero por favor: ";
    std::cin >> num1;

    std::cout << "Introduce un segundo numero por favor: ";
    std::cin >> num2;

    suma = num1 + num2;

    std::cout << "La suma de los numeros es: " << suma << std::endl;

    return 0;
}