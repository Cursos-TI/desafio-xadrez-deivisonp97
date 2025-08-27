#include <stdio.h>

void movertorre(int torre){
    if(torre > 0){
        printf("Á DIREITA! \n");
        movertorre(torre - 1);
    }
}

void moverBispo(int bispo){
    if(bispo > 0){
        printf(" PARA CIMA E A DIREITA! \n");
        moverBispo(bispo - 1);
    }
}

void moverRainha(int rainha){
    if(rainha > 0){
        printf("PARA A ESQUERDA! \n");
        moverRainha ( rainha - 1);
    }
}
int main(){
    printf("MOVENDO A TORRE! \n");
    movertorre(5);
    printf("MOVENDO O BISPO! \n");
    moverBispo(5);
    printf("MOVENDO A RAINHA! \n");
    moverRainha(8);

    for(int cavalo = 0; cavalo < 1; cavalo++){
       printf("MOVENDO O CAVALO! \n");
        for(int i = 0; i == cavalo; i++){
            printf("BAIXO, BAIXO, ESQUERDA! \n");
        }
    }

    
    return 0;
}