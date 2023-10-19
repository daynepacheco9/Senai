/*Faça a leitura de todos os valores em posições de duas matrizes 4x4.
 Calcule a multiplicação do valor absoluto das duas e exiba o resultado.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matriz1[4][4];
    int matriz2[4][4];
    int resultado1;
    int resultado2;
    int resultadofinal;

    printf("Digite valores para primeira matriz:\n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%d", &matriz1[i][j]);
            if (matriz1[0][0])
            {
                resultado1 = matriz1[0][0];
            }
            else
            {
                resultado1 = resultado1 * matriz1[i][j];
            }
        }
    }

    printf("Digite valores para segunda matriz:\n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            scanf("%d", &matriz2[i][j]);
            if (matriz2[0][0])
            {
                resultado2 = matriz1[0][0];
            }
            else
            {
                resultado2 = resultado2 * matriz1[i][j];
            }
        }
    }

    resultadofinal = resultado1 * resultado2;

    printf("Valor Absoluto eh: %d", resultadofinal);


}
