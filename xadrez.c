#include <stdio.h>

int main(){
    int torre = 0;
    int bispo = 0;
    int rainha = 0;
    int cavalo;
    char t;
    char b;
    char r;
    char c;

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

    printf("Tecle * c * PARA MOVER O CAVALO! \n");
    scanf("%s", &c);

    for(cavalo = 0; cavalo < 1; cavalo++)
    {
        for(int i = 0; i <= cavalo; i++){
            printf("Baixo, Baixo, Esquerda!\n");
        }
        printf("\n");
    }
    


    
    


    
    
    
    
}

