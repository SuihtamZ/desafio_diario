#include <iostream>

//Intercambiar elementos
void intercambiar (int &a, int &b) {
    int tem = a;
    a = b;
    b = tem;
}

//Ordenamos el array utilizando algoritmo de ordenamiento por burbuja
void ordenar(int arr[], int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                intercambiar (arr[j], arr[j + 1]);
            }
        }
    }
    
}

// Función para imprimir el array
void imprimirArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Declarar y inicializar el array
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array original: ";
    imprimirArray(arr, n);

    // Ordenar el array
    ordenar(arr, n);

    std::cout << "Array ordenado: ";
    imprimirArray(arr, n);

    return 0;
}