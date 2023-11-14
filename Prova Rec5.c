/*Crie um programa que compare o valor absoluto de duas matrizes e imprima qual é a maior matriz. (2,0*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matriz2[4][4] = {{4, 5, 6, 7}, {12, 13, 14, 15}, {10, 27, 68, 20}, {8, 21, 34, 16}};

    int soma1 = 0;
    int soma2 = 0;
    int k1, k2;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma1 += matriz1[i][j];
            k1++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma2 += matriz2[i][j];
            k2++;
        }
    }
    int soma_res = soma1 + soma2;
    printf("\nSoma do valor das duas matrizes eh %d", soma_res);

    if (k1 > k2)
    {
        printf("\nMatriz 1 eh maior");
    }
    else printf("\nMatriz 2 eh maior");
}