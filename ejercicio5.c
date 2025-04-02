#include <stdio.h>

int main() {
    int i = 10;
    while (i >= 1) {
        printf("%d\n", i);
        i = i - 1; 
    }

    printf("\nEjemplo de break:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("¡Bucle interrumpido en i = %d!\n", i);
            break; 
        }
        printf("%d ", i);
    }

   
    printf("\nEjemplo de continue:\n");
    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0) {
            continue; 
        }
        printf("%d ", i);
    }

    return 0;
}