/*1 - Aloque memória dinamicamente para ler um novo tipo de dados criado por você.
 Você deverá ler veículos(Modelo, Fabricante ,Cor, Ano, Valor).
 Quem decide a quantidade de veículos a serem lidos é o usuário do programa.
 Insira em um arquivo de texto os veículos e mostre dentro do programa a lista inserida.*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[20];
    char fabricante[20];
    char cor[20];
    int ano;
    float valor;

} Carros;

int main()
{
    FILE *arquivo;
    int quantidade;
    Carros *array;
    int resposta;
    Carros *array2;
    //char array3[500];

    printf("Digite a quantidade de veiculos: ");
    scanf("%d", &quantidade);

    arquivo = fopen("Carros.txt", "w");

    array = malloc(quantidade * sizeof(Carros));

    for (int i = 0; i < quantidade; i++)
    {
        printf("\nCarro %i", i+1 );
        printf("\nDigite o modelo: ");
        scanf("%s", (array[i].nome));

        printf("\nDigite o fabricante: ");
        scanf("%s", (array[i].fabricante));

        printf("\nDigite a cor: ");
        scanf("%s", (array[i].cor));

        printf("\nDigite o ano: ");
        scanf("%i", &(array[i].ano));

        printf("\nDigite o valor: ");
        scanf("%f", &(array[i].valor));

        fprintf(arquivo, "%s %s %s %i %.2f\n", array[i].nome, array[i].fabricante, array[i].cor, array[i].ano, array[i].valor);
    }

    while (1)
    {
        printf("\nDeseja inserir mais elemento? (1)Sim (2)Não\n");
        scanf("%d", &resposta);

        if (resposta == 1)
        {
            quantidade++;
            array2 = realloc(array, quantidade * sizeof(Carros));
            printf("\nDigite o modelo: ");
            scanf("%s", (array2[quantidade-1].nome));

            printf("\nDigite o fabricante: ");
            scanf("%s", (array2[quantidade-1].fabricante));

            printf("\nDigite a cor: ");
            scanf("%s", (array2[quantidade-1].cor));

            printf("\nDigite o ano: ");
            scanf("%i", &(array2[quantidade-1].ano));

            printf("\nDigite o valor: ");
            scanf("%f", &(array2[quantidade-1].valor));

            fprintf(arquivo, "%s %s %s %i %.2f\n", array2[quantidade-1].nome, array2[quantidade-1].fabricante, array2[quantidade-1].cor, array2[quantidade-1].ano, array2[quantidade-1].valor);
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
    // fscanf(arquivo,"%s",array3);
    // printf("%s",array3);



    fclose(arquivo);
    free(array2);
    return 0;
}