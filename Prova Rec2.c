#include <stdio.h>

float soma(float numero)
{
    if (numero == 0)
    {
        return 1;
    }
    else
    {
        float resposta;
        resposta = numero + soma(numero - 1);
    }
}
int main()
{
    float numeros;
    printf("Digite um numero para fazer a soma:\n");
    scanf("%f\n", &numeros);
    soma(numeros);
}