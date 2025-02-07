#include <stdio.h>

int main() {
    int num;
    scanf("%i", &num);

    for (int i = 0; i < num; i++) {       // Controls rows
        for (int j = 0; j < num - i; j++) { // Controls columns
            printf("*");
        }
        printf("\n"); // Move to next line after printing each row
    }

    return 0;
}
