#include <stdio.h>

int main() {
    int tamanho;

    printf("Digite o tamanho da matriz : ");
    scanf("%d", &tamanho);

   
    if (tamanho <= 0) {
        printf("Tamanho de matriz inválido.\n");
        return 1;
    }

   
    int matriz[tamanho][tamanho];

   
    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

   
    int somadiseg = 0;
    for (int i = 0; i < tamanho; i++) {
        somadiseg += matriz[i][tamanho - 1 - i];
    }

   
    printf("A soma é: %d\n", somadiseg);

    return 0;
}

