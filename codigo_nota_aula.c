#include <stdio.h>

int main() {
    int aula, professor, disciplina;

    printf("=== SISTEMA DE AVALIACAO ACADEMICA ===\n");
    printf("(Responda 1 para SIM ou 0 para NAO)\n\n");

    printf("Voce gostou da aula? ");
    scanf("%d", &aula);

    if (aula == 1) {
        printf("Que bom! Ficamos felizes com o seu feedback.\n");
    } else if (aula == 0) {
        printf("Sentimos muito. Entre em contato com o suporte para melhorias.\n");
    } else {
        printf("Opcao invalida, mas seguiremos com a pesquisa.\n");
    }

    printf("\nO que achou do professor? Voce gostou da didatica? ");
    scanf("%d", &professor);

    if (professor == 1) {
        printf("Excelente! Transmitiremos o elogio ao docente.\n");
    } else if (professor == 0) {
        printf("Entendido. Iremos verificar como podemos melhorar a metodologia.\n");
    }

    printf("\nVoce recomendaria esta disciplina para um colega? ");
    scanf("%d", &disciplina);

    if (disciplina == 1) {
        printf("Otimo! Isso nos ajuda a manter a qualidade do curso.\n");
    } else {
        printf("Agradecemos a sinceridade. Buscaremos evoluir o conteudo.\n");
    }

    printf("\n--------------------------------------------------\n");
    printf("A instituicao agradece o seu retorno. Bons estudos!\n");

    return 0;
}