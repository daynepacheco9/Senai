#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lista_1[4][4] = {{3,5,6,9},{9,6,8,1},{1,2,3,4,},{8,2,4,6}};
    int lista_2[4][4] = {{8,6,2,4},{7,3,1,9},{3,5,1,2},{4,8,6,5}};
    int lista_3[4][4];

    for (int i = 0; i < 4 ; i++)
    {
        for (int j = 0; j < 4 ; j++)
        {
            if (lista_1[i][j] < lista_2[i][j])
            {
                lista_3[i][j] = lista_2[i][j];
            }
            else
            {
                lista_3[i][j] = lista_1[i][j];
            }
            printf("%d ",lista_3[i][j]);
        }
        printf("\n");
    }
    
}