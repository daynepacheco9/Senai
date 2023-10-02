#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lista[3][3] = {{6,5,8},{4,7,3},{1,10,2}};
    int maior;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            if ( maior < lista[i][j]){
                maior = lista[i][j];
            }
        }
    }
    printf("maior = %d", maior);
}