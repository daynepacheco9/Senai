#include <stdio.h>

int soma_de_numeros(int num1, int num2) 
{
    return num1 + num2;
}

void verificarResultado(int Resultado)
{
    if (Resultado > 0)
    {
        printf("O Resultado e positivo.\n");
    } 
    else 
    {
        printf("O Resultado e negativo.\n");
    }
}

void imprimirMensagemLoop()
{
    for (int i = 0; i < 5; i++) 
    {
        printf("Este e um loop de teste.\n");
    }
}

int main() {
    int numero_um;
    int numero_dois;
    int resultado;

    printf("Digite dois numeros: ");
    scanf("%d %d", &numero_um, &numero_dois);

    resultado = soma_de_numeros(numero_um, numero_dois);
    printf("A soma dos numeros e: %d\n", resultado);
    
    verificarResultado(resultado);
    imprimirMensagemLoop();

    return 0;
}