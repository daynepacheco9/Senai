#include <stdio.h>

float calcularSoma(float val1, float val2)
{
    float resposta = val1 + val2;
    return resposta;
}

float calcularSub(float val1, float val2)
{
    float resposta = val1 - val2;
    return resposta;
}
float calcularMulti(float val1, float val2)
{
    float resposta = val1 * val2;
    return resposta;
}
float calcularDiv(float val1, float val2)
{
    float resposta = val1 / val2;
    return resposta;
}

int main()
{
    int op;
    float valor1;
    float valor2;

    printf("********CALCULADORA BASICA********\n");
    printf("(1) Soma [+]\n");
    printf("(2) Subtracao [-]\n");
    printf("(3) Multiplicacao [X]\n");
    printf("(4) Divisao [%%]\n");
    printf("\nDigite sua opcao:");
    scanf("%d", &op);

    printf("\nDigite o valor 1:");
    scanf("%f", &valor1);
    printf("\nDigite o valor 2: ");
    scanf("%f", &valor2);

    switch (op)
    {
    case 1:
        printf("\nO resultado da soma eh %f", calcularSoma(valor1, valor2));
        break;
    case 2:
        printf("\nO resultado da soma eh %f", calcularSub(valor1, valor2));
        break;
    case 3:
        printf("\nO resultado da soma eh %f", calcularMulti(valor1, valor2));
        break;
    case 4:
        printf("\nO resultado da soma eh %f", calcularDiv(valor1, valor2));
        break;
    default:
        printf("\nEssa opcao nao existe.");
        break;
    }
}