#include <stdio.h>

int main() {
    int tempos[10] = {12, 5, 22, 45, 8, 15, 30, 18, 50, 27};
    int i, j, aux;

    printf("Tempos originais:\n");
    for (i = 0; i < 10; i++) {
        printf("%d min\n", tempos[i]);
    }

    // Lógica do Bubble Sort Crescente
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (tempos[j] > tempos[j + 1]) {
                aux = tempos[j];
                tempos[j] = tempos[j + 1];
                tempos[j + 1] = aux;
            }
        }
    }

    printf("\nTempos em ordem crescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d min\n", tempos[i]);
    }

    // Lógica do Bubble Sort Decrescente
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (tempos[j] < tempos[j + 1]) {
                aux = tempos[j];
                tempos[j] = tempos[j + 1];
                tempos[j + 1] = aux;
            }
        }
    }

    printf("\nTempos em ordem decrescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d min\n", tempos[i]);
    }

    return 0;
}


