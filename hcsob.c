#include <stdio.h>

void calcularMeta(float valor, float meta, int meta_real)
{
    while(meta <= meta_real)
    {
        printf("Digite o valor do mes:");
        scanf("%f", &valor);
        meta = meta + valor;
    }
    return meta; 
}

void metaAtingida()
{
    printf("META ATINGIDA!!");
}

void excessoMeta(int num_funcionarios, float meta, int meta_real)
{
    printf("Digite o numer de funcionarios: ");
    scanf("%d",&num_funcionarios);

    return (meta - meta_real ) / num_funcionarios;
}

int main()
{
    float meta = 0;
    float valor;
    int num_funcionarios;
    int meta_real = 250000;   


    calcularMeta(valor,meta, meta_real);
    metaAtingida();
    
    if (meta > meta_real)
    {
        excessoMeta(num_funcionarios, meta, meta_real);
    }


}