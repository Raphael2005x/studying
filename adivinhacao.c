#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    printf("******************************************\n");
    printf("* Bem viando ao nosso jogo de advinhação *\n");
    printf("******************************************\n");

    srand(time(NULL)); //inicia o bglh de numero automatico

    int numero_secreto = rand() % 45; // 0 ao 45 numeros aleatorios
    int chute = 0;
    int tentativa, acertou = 0;

    for (tentativa = 1; tentativa <= 10; tentativa++) { // ate 10 tentativas
        printf("Tentativa %d: ", tentativa);
        scanf("%d", &chute);

        if (chute == numero_secreto) {
            printf("Parabéns! Você acertou o número secreto %d!\n", numero_secreto);
            acertou = 1; // o codigo dentro do if (!acertou) não será executado
            break; // se acertar finaliza o codigo.
        } else if (chute < numero_secreto) {
            printf("O número secreto é maior que %d\n", chute);
        } else {
            printf("O número secreto é menor que %d\n", chute);
        }
    }

    if (!acertou) { //! negação!
        printf("Que pena! Você não conseguiu adivinhar. O número secreto era %d.\n", numero_secreto);
    }
    return 0;
}

