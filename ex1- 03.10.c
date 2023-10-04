/*1- Leia um array com 10 posições e identifique se existem valores iguais neste array.
 se existirem, envie para um outro array e o exiba na tela.*/

 #include <stdio.h>
 #include <stdlib.h>

 int main()
 {
    int array[10];
    int array2[10];
    int i = 0;
    int k = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Valor %d: ", i+1);
        scanf("%d", &array[i]);
    }
    for(i = 0; i < 10; i++)
    {
        for (int j = i + 1; j < 10; j++)
        {
            if (array[i] == array[j])
            {
                array2[k] = array[i];
                printf("%d\n",array2[k]);
                k++;
            }
        }
    }
 }