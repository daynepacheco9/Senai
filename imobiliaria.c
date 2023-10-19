/*Uma imobiliária deseja um sistema para armazenar apenas o valor de imóveis vendidos no período de um mês.
 Seu programa deve perguntar ao usuário quantos imóveis foram vendidos e alocar memória para fazer o armazenamento de valores.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    int *array;

    printf("Qual a quantidade de imoveis?: ");
    scanf("%d", &size);

    array = (int *)malloc(size * sizeof(int));

    for (int i = 0; i <= size; i++)
    {
        printf("Qual o valor do imovel: ");
        scanf("%d", array[i]);
        printf("%d\n", i);
    }

    printf("Valor dos imóveis: \n");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", array[i]);
    }
    free(array);
}
