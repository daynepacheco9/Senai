/*4-Faça um programa para corrigir uma prova com 10 questões de múltipla escolha (a, b, c, d), em uma turma com 3 alunos.
 Cada questão vale 1 ponto. Leia o gabarito, e para cada aluno leia sua matricula (número inteiro) e suas respostas.
  Calcule e escreva: Para cada aluno, escreva sua matrícula, suas respostas, e sua nota.
 O percentual de aprovação, assumindo média 7.0.*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char respostas[3][10] = {{'a','c','d','b','d','c','d','a','c','d'},{'b','c','b','d','a','b','d','a','c','d'},{'a','b','c','d','d','a','b','c','d','d'}};
    char gabarito[10] = {'a','b','c','d','d','a','b','c','d','d'};
    char nome[3][10] = {"Dayne","Maria","Nilton"};
    int i, j, ponto,porcentagem;

    for (i = 0; i < 3; i++)
    {
        ponto =0;
        for(j = 0; j < 10; j++)
        {
            if (respostas[i][j]== gabarito[j])
            {
                ponto++;
            }
        }
        porcentagem = ponto*10;

        if (porcentagem >= 70)
        printf("\n\nAPROVADO!!!");

        else printf("\n\nREPROVADO!!");

        printf("\nNota do %s: %d e sua porcentagem eh %d%%", nome[i], ponto, porcentagem);
    }
}