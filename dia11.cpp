#include <iostream>   // Para la entrada y salida estándar
#include <string>     // Para usar la clase std::string
#include <algorithm>  // Para usar std::transform y std::remove_if

// Función para convertir una cadena a minúsculas
std::string toLowerCase(const std::string& str) {
    std::string lowerStr = str;
    std::transform(lowerStr.begin(), lowerStr.end(), lowerStr.begin(), ::tolower);
    return lowerStr;
}

// Función para eliminar caracteres no alfabéticos de una cadena
std::string removeNonAlphabetic(const std::string& str) {
    std::string cleanStr;
    for (char c : str) {
        if (std::isalpha(c)) {
            cleanStr += c;
        }
    }
    return cleanStr;
}

// Función para verificar si una cadena es un palíndromo
bool esPalindromo(const std::string& str) {
    std::string cleanStr = removeNonAlphabetic(str);
    cleanStr = toLowerCase(cleanStr);
    std::string reversedStr = cleanStr;
    std::reverse(reversedStr.begin(), reversedStr.end());
    return cleanStr == reversedStr;
}

int main() {
    std::string input;
    std::cout << "Ingrese una cadena: ";
    std::getline(std::cin, input);

    if (esPalindromo(input)) {
        std::cout << "La cadena es un palíndromo.\n";
    } else {
        std::cout << "La cadena no es un palíndromo.\n";
    }

    return 0;
}