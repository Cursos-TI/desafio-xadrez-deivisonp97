#include <stdio.h>

int main(){
    int torre = 0;
    int bispo = 0;
    int rainha = 0;
    char t;
    char b;
    char r;

    printf("Tecle * t * PARA MOVER A TORRE! \n");
    scanf("%s", &t);
    
    while (torre < 5)
    {
        printf("á direita! \n");
        torre++;
    }

    printf("Tecle * b * PARA MOVER O BISPO! \n");
    scanf("%s", &b);

    do
    {
        bispo++;
        if(bispo < 6){
            printf(" para cima e a direita! \n");
        } 
    } while (bispo < 6);

    printf("Tecle * r * PARA MOVER A RAINHA! \n");
    scanf("%s", &r);

    for (rainha = 0; rainha < 8; rainha++)
    {
        printf(" para a esquerda! \n");
    }
    
}