#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
setlocale(LC_ALL, "Portuguese");
    int vetor[10];
    int i;

    for (i = 0; i < 10; i++) {
        printf("Digite o número na posição %d: ", i + 1);
        scanf("%d", &vetor[i]);
        vetor[i] = 2 * vetor[i];
    }

    // Apresentara os resultados //
    printf("Valores dobrados:\n");
    for (i = 0; i < 10; i++) {
        printf("Posição %d: %d\n", i + 1, vetor[i]);
    }

    return 0;
}

