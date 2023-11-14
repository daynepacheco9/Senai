/*Faça um programa que leia n valores e armazene esses valores em um array[n].
 Depois, multiplique todos esses valores.(2,0)*/
#include <stdio.h>

int main(){
    int n;
    printf("Digite um numero:");
    scanf("%d", &n);

    int array[n];
    for (int i = 0; i < n; i++)
    {
        int numero;
        printf("\nDigite um valor%d:",i+1);
        scanf("%d", &numero);
        array[i] = numero;
    }
    int resposta = 1;
    for (int i = 0; i < n; i++)
    {
        resposta *= array[i];
    }
    printf("A multiplicacao de todos os numeros eh %d", resposta);
}