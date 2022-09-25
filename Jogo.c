#include <stdio.h>


int main(){

    //Imprimindo cabecalho

    printf("=========================================\n");
    printf("   | Bem Vindo ao jogo de adivinhacao |\n");
    printf("=========================================\n");
    printf("\n");

    int numerosecreto = 42;
    int chute;
    int tentativa = 1;



    while (1){

        printf("(tentativa %d)\n", tentativa);
        printf("Qual e  o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0){
            printf("Voce nao pode chutar numeros negativos\n");
            continue;
        }

        int acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if(acertou){
            printf("Parabens! voce acertou!\n");
            printf("Jogue novo\n.");
            break;
        }

        else if(maior){
            printf("Seu chute foi maior que o numero secreto\n");
            printf("\n");
        }

        else {
            printf("Seu chute foi menor que o numero secreto\n");
        }

        printf("\n");
        tentativa++;
    }

    printf("==== FIM DE JOGO ====\n");
    printf("Voce acertou em %d tentativas\n", tentativa);
}
