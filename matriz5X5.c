/*Crie uma matriz 5x5 de inteiros e insira valores em cada uma das posições.
 Você deverá localizar os valores pares e colocar em um outro array para fazer a exibição.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz[5][5];
    int tamanho=0;
    int k =0;

    printf("Digite valores para uma matriz 5X5:\n");
    for(int i = 0; i < 5 ; i++)
    {
        for (int j = 0; j < 5; j++ )
        {
            scanf("%d", &matriz[i][j]);
            if ( matriz [i][j] % 2 ==0)
            {
                tamanho++;
            }
        }
    }
    int *array = (int *)malloc(tamanho * sizeof(int));
    
    for(int i = 0; i < 5 ; i++)
    {
        for (int j = 0; j < 5; j++ )
        {
            if ( matriz [i][j] % 2 ==0)
            {
                array[k] = matriz[i][j];
                k++;
            }
        }
    } 

    for (int i = 0; i < tamanho; i++)
    {
        printf("array %d  ", array[i]);
    }


    free(array);

}