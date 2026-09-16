#include <stdio.h>

int main() {
    float consumo, soma = 0, media;

    for (int i = 1; i <= 5; i++) {
        printf("Digite o consumo de agua do morador %d (em m3): ", i);
        scanf("%f", &consumo);

        soma += consumo;

        if (consumo <= 20) {
            printf("Morador %d: consumo dentro da media.\n", i);
        } else {
            printf("Morador %d: consumo acima da media.\n", i);
        }
    }

    media = soma / 5;

    printf("\nConsumo medio geral: %.2f m3\n", media);

    return 0;
}
