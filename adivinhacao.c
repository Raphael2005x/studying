#include <stdio.h>

int main(){
    printf("******************************************\n");
    printf("* Bem viando ao nosso jogo de advinhação *\n");
    printf("******************************************\n");

    int numerosecreto = 42;

    int chute;

    printf("qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute é %d\n", chute);

    if(chute == numerosecreto) {
        printf("Parabéns! Você Acertou!\n");
        printf("Jogue de novo, você é um bom jogador!");
    }
    else{

        if(chute > numerosecreto){
            printf("Seu chute foi maior que o numero secreto\n");
        } 
        else if (chute < numerosecreto) {
            printf("Seu chute foi menor que o numero secreto\n");
        }
        
        printf("Você Errou!\n");
        printf("Mas não desanime, Tente de novo!");
    }
}
