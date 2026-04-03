#include <stdio.h>

int main()
{
    float num1, num2, resultado;
    char operacao;

    printf("Digite o primeiro numero: \n");
    scanf("%f", &num1);

    printf("Digite o segundo numero: \n");
    scanf("%f", &num2);

    printf("Digite a operacao (+, -, *, /): \n");
    scanf(" %c", &operacao);

    if (operacao == '+')
    {
        resultado = num1 + num2;
        printf("O resultado e: %.2f \n", resultado);
    }
    else if (operacao == '-')
    {
        resultado = num1 - num2;
        printf("O resultado e: %.2f \n", resultado);
    }
    else if (operacao == '*')
    {
        resultado = num1 * num2;
        printf("O resultado e: %.2f \n", resultado);
    }
    else if (operacao == '/')
    {
        if (num2 != 0)
        {
            resultado = num1 / num2;
            printf("O resultado e: %.2f \n", resultado);
        }
        else
        {
            printf("Erro: Divisao por 0 e indeterminada matematicamente!\n");
        }
    }
    else
    {
        printf("Operacao invalida!\n");
    }

    return 0;
}