#include <stdio.h>



int main(){

    //Imprimindo cabecalho

    printf("=========================================\n");
    printf("   | Bem Vindo ao jogo de adivinhacao |\n");
    printf("=========================================\n");
    printf("\n");

    int numeroSecreto = 42;

    int chute;


    printf("Qual e o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d\n", chute);

    int acertou = chute == numeroSecreto;


    if(acertou){

        printf("Parabens! voce acertou!\n");
        printf("Jogue novo.");
    }
    else{

        int maior = chute > numeroSecreto;
        int menor = chute < numeroSecreto;

        if(maior){

            printf("Seu chute foi maior que o numero secreto");
        }

        if(menor){

            printf("Seu chute foi menor que o numero secreto");
        }

    }




}
