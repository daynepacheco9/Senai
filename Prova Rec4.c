/*Faça um programa que leia a quantidade de pessoas
 que o usuário deseja inserir para armazenar em um arquivo
  de texto essas informações.
  usar struct e FILE. (2,0)*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[20];
    int idade;
} Pessoa;

int main()
{
    FILE *pessoa;
    int quantidade;
    Pessoa *array;

    printf("Digite a quantidade de pessoa:");
    scanf("%d", &quantidade);

    pessoa = fopen("Pessoas.txt", "w");

    array = malloc(quantidade * sizeof(Pessoa));

    for (int i = 0; i < quantidade; i++)
    {
        printf("\nDigite o nome da pessoa: ");
        scanf("%s", (array[i].nome));

        printf("\nDigite a idade da pessoa: ");
        scanf("%d", (array[i].idade));

        fprintf(pessoa, "Nome: %s \nIdade:%d\n", array[i].nome, array[i].idade);
    }
    fclose(pessoa);
    free(array);
    return 0;
}
