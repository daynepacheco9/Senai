/*2 - Faça um programa que contenha um array de 10 posições. 
O usuário poderá selecionar duas posições para fazer algum dos cálculos básicos (soma, subtração, divisão, multiplicação) .*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    int array[10];
    int i , val1 , val2, op, resposta;

    for (i = 0; i < 10; i++)
    {
        printf("Valor %d: ", i+1);
        scanf("%d", &array[i]);
    }
    printf("\nDigite a posicao do primeiro valor que deseja: ");
    scanf("%d", &val1);
    printf("\nDigite a posicao do segundo valor que deseja: ");
    scanf("%d", &val2);

    printf("Escolha uma opcao: \n(1)Soma \n(2)Subracao \n(3)Multiplicacao \n(4)Divisao \n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        resposta = array[val1-1] + array[val2-1];
        printf("%d + %d = %d", array[val1-1], array[val2-1], resposta);
        break;

    case 2:
        resposta = array[val1-1] - array[val2-1];
        printf("%d - %d = %d", array[val1-1], array[val2-1], resposta);
        break;

    case 3:
        resposta = array[val1-1] * array[val2-1];
        printf("%d X %d = %d", array[val1-1], array[val2-1], resposta);
        break;

    case 4:
        resposta = array[val1-1] + array[val2-1];
        printf("%d %% %d = %d", array[val1-1], array[val2-1], resposta);
        break;
    
    default:
        break;
    }

}