#include <stdio.h> 

char palpite, palavra[20] = "aprendiz", escondida[20] = "________";
int vida = 6,cont= 0;

void clean_buffer() {
    while ((getchar()) != '\n');
}

void forca(){
    while (1){
        int erro = 0;
        printf("\nVoce tem %i vidas\n",vida);
        printf("%s\n",escondida);        
        printf("Digite um palpite:");
        scanf("%c",&palpite);
        clean_buffer();

        int i = 0, j =0; 
        for(i=0; palavra[i]; i++){
            if (palpite == palavra[i]){
                escondida[i] = palpite;
            }
            else{
                erro ++;
            }
            if (erro == 8){
                vida --;
            }
        }
        if (vida == 0){
            printf("Perdeu");
            break;
        }
        int vit=0;
        for(j=0;palavra[j];j++){
            if(palavra[j]==escondida[j]){
                vit++;
            }
            if (vit==8){
                break;
            }
        }
    }
}

int main(){
  forca();  
}
