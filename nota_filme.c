#include <stdio.h>

int main() {
    int scarface = 0;
    int pulp_fiction = 0;
    float media;

    printf("=== CINE-AVALIACAO ===\n");

    printf("\nDe 0 a 10, qual a sua nota para o filme SCARFACE? ");
    scanf("%d", &scarface);

    if (scarface >= 5) {
        printf("Boa! Um classico de Brian De Palma.\n");
    } else {
        printf("Entendo, o estilo de Al Pacino nao agrada a todos.\n");
    }

    printf("\nAgora, qual a sua nota para PULP FICTION? ");
    scanf("%d", &pulp_fiction);

    if (pulp_fiction >= 5) {
        printf("Fico feliz! Essa e uma obra-prima do Tarantino.\n");
    } else {
        printf("Poxa, Pulp Fiction e um cult que divide opinioes!\n");
    }

    media = (scarface + pulp_fiction) / 2.0;

    printf("\n--------------------------------------\n");
    printf("Sua media de avaliacao foi: %.2f\n", media);
    
    if (media >= 7) {
        printf("Voce e um(a) verdadeiro(a) fã de cinema!\n");
    }
    
    return 0;
}