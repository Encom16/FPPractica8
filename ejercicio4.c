#include <stdio.h>

int main() {
    int numero;

    // Solicita un número hasta que esté en el rango válido
    do {
        printf("Ingrese un número entre 1 y 100: ");
        scanf("%d", &numero);

        if (numero < 1 || numero > 100) {
            printf("Error: el número debe estar entre 1 y 100.\n");
        }
    } while (numero < 1 || numero > 100);

    printf("Número válido ingresado: %d\n", numero);

    return 0;
}