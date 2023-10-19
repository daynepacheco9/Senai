#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int num_usuario;
    int num_aleatorio = rand()% 1000 + 1;
    printf("%d",num_aleatorio);
    while(1){
        printf("\nDigite um numero de 1 á 1000:"); scanf("%d",&num_usuario); 
        if (num_aleatorio == num_usuario){
            printf("Você acertou!!");
            break;
        }
        else if (num_aleatorio < num_usuario && num_usuario < (num_aleatorio + 10)){
            printf("Esta quase!");
        }
        else if ((num_aleatorio -10) < num_usuario && num_usuario < num_aleatorio){
            printf("Esta quase!");
        }
        else if( num_usuario <= 0){
            printf("Tem que ser maior que zero");
        }
        else{
            printf("Esta longe");
        }
    }


}