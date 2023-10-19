/*Crie um programa que peça ao usuário para inserir elementos em um
array dinamicamente redimensionado usando realloc. O array deve
crescer à medida que o usuário insere mais elementos.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade;
    int *arrayOriginal;
    int resposta;
    int *array2;

    printf("Digite a quantidade desejada de elementos: ");
    scanf("%d", &quantidade);

    arrayOriginal = (int *)malloc(quantidade * sizeof(int));

    for (int i = 0; i < quantidade; i++)
    {
        if (i == 0)
        {
            printf("Digite um elemento para lista: ");
            scanf("%d", &arrayOriginal[i]);
        }
        else
        {
            printf("Digite mais um elemento para lista: ");
            scanf("%d", &arrayOriginal[i]);
        }
    }

    while (1)
    {
        printf("\nDeseja inserir mais elemento? (1)Sim (2)Não\n");
        scanf("%d", &resposta);

        if (resposta == 1)
        {
            array2 = (int *)realloc(arrayOriginal, quantidade + 1 * sizeof(int));
            printf("\nDigite mais um elemento: ");
            scanf("%d", &array2[quantidade]);
            quantidade++;
        }
        else if (resposta == 2)
        {
            break;
        }
        else
        {
            printf("\nOpção invalida \n");
        }
    }
    // printf("Array:\n");
    // for (int i = 0; i < quantidade; i++)
    // {
    //     printf("%d    ", array2[i]);
    // }

    free(array2);
}