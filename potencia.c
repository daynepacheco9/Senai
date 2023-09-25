#include <stdio.h>

int calculo(int base, int expoente, int resultado)
{
    if (expoente<=0)
    {
        return 1;
    }
    else
    {
        resultado = resultado * base;
        calculo(base, expoente -1 , resultado);
    }
}



int main()
{
    int base;
    int expoente;
    int resultado = 1;

    printf("Digite um numero: ");
    scanf("%d",&base);

    printf("Digite sua potencia: ");
    scanf("%d",&expoente);

    calculo(base,expoente,resultado);

}