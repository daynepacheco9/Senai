#include <stdio.h>

int tabuada( int numero, int multiplicador){
    if (multiplicador >= 11){
        return 1;
    }
    else{
        int resul = numero * multiplicador;
        printf("%d X %d = %d \n", numero, multiplicador, resul );
        tabuada(numero , multiplicador +1);

    }

}
int main(){
    int numero , multipplicador =1 ;
    printf("Digite um numero: \n");
    scanf("%d", &numero);
    tabuada(numero, multipplicador);
}