#include <stdio.h>
#include <math.h> 

int main() {
    float a, b, c, delta, x1, x2;

    printf("=== CALCULADORA DE EQUACAO DO 2o GRAU ===\n");
    printf("Formato: ax^2 + bx + c = 0\n\n");

    printf("Digite os coeficientes a, b e c: ");
    if (scanf("%f %f %f", &a, &b, &c) != 3) {
        printf("Erro: Digite apenas numeros.\n");
        return 1;
    }

    if (a == 0) {
        printf("\nErro: Se 'a' e igual a 0, nao e uma equacao do segundo grau.\n");
    } 
    else {
        delta = pow(b, 2) - (4 * a * c);
        printf("\nDelta calculado: %.2f\n", delta);

        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Existem duas raizes reais distintas:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        } 
        else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Existe apenas uma raiz real (ou duas raizes iguais):\n");
            printf("x1 = x2 = %.2f\n", x1);
        } 
        else {
            printf("Nao existem raizes reais (Delta negativo).\n");
        }
    }

    printf("\n=========================================\n");
    return 0;
}