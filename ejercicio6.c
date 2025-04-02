#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            continue; 
        }

        printf("%d\n", i);

        if (i > 8) {
            break; 
        }
    }
    
    return 0;
}