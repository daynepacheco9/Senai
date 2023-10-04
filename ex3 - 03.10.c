/*3- Leia uma matriz 5 x 10 que se refere respostas de 10 questões de múltipla escolha, referentes a 5 alunos. 
Leia também um vetor de 10 posições contendo o gabarito de respostas que podem ser a, b, c ou d. 
Seu programa deverá comparar as respostas de cada candidato com o gabarito e emitir um vetor denominado resultado,
 contendo a pontuação correspondente a cada aluno.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char respostas[5][10] = {{'a','c','d','b','d','c','d','a','c','d'},{'b','c','b','d','a','b','d','a','c','d'},{'a','b','c','d','d','a','b','c','d','d'},{'d','d','c','b','a','d','d','c','b','a'},{'b','d','c','b','a','b','a','c','d','d'}};
    char gabarito[10] = {'a','b','c','d','d','a','b','c','d','d'};
    char nome[5][10] = {"Dayne","Maria","Nilton","Jessica","Vitoria"};
    int i, j, ponto;

    for (i = 0; i < 5; i++)
    {
        ponto =0;
        for(j = 0; j < 10; j++)
        {
            if (respostas[i][j]== gabarito[j])
            {
                ponto++;
            }
        }
        printf("\nNota do %s: %d", nome[i], ponto);
    }
}