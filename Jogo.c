#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    //Imprimindo cabecalho

    printf("    .__________________________.                                  \n");
    printf("    | .___________________. |==|                                  \n");
    printf("    | | ................. | |  |                                  \n");
    printf("    | | ::::Apple ][::::: | |  |                                  \n");
    printf("    | | ::::::::::::::::: | |  |                                  \n");
    printf("    | | ::::::::::::::::: | |  |            BEM VINDO AO GAME     \n");
    printf("    | | ::::::::::::::::: | |  |                                  \n");
    printf("    | | ::::::::::::::::: | |  |           AKINATOR DE NUMEROS    \n");
    printf("    | | ::::::::::::::::: | | ,|              -  By MD  -         \n");
    printf("    | !___________________! |(c|                                  \n");
    printf("    !_______________________!__!                                  \n");
    printf("   /                            \\              \n");
    printf("  /  [][][][][][][][][][][][][]  \\             \n");
    printf(" /  [][][][][][][][][][][][][][]  \\            \n");
    printf("(  [][][][][____________][][][][]  )            \n");
    printf(" \\ ------------------------------ /            \n");
    printf("  \\______________________________/             \n");
    printf("\n\n");

    //gerando número aleatório;

    srand(time(0));
    int numerosecreto = rand() % 100;
    
    // sistemas de pontos
    int chute;
    int tentativa = 1;
    double pontos = 1000;
    int acertou = 0;
    
    //gerando níveis de dificuldades
    
    int nivel;
    printf("Qual nivel de dificuldade?\n");
    printf("(1) Facil (2) Medio (3)Dificil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int numerodetentativas;

    switch(nivel) {

        case 1:
            numerodetentativas = 20;
            break;

        case 2:
            numerodetentativas = 15;
            break;

        default:
            numerodetentativas = 6;
            break;
    }


    for (int i = 1; i <= numerodetentativas; i++)  {

        printf("(tentativa %d)\n", tentativa);
        printf("Qual e  o seu chute? ");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0){
            printf("Voce nao pode chutar numeros negativos\n");
            continue;
        }

        acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;


        if(acertou){
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


        double pontosperdidos = abs(chute - numerosecreto ) / 2.0;
        pontos = pontos - pontosperdidos;
    }

    if(acertou){


            printf("                  *****************                                          \n");
            printf("               ******               ******                                   \n");
            printf("           ****                           ****                               \n");
            printf("        ****                                 ***                             \n");
            printf("      ***                                       ***                          \n");
            printf("     **           ***               ***           **                         \n");
            printf("   **           *******           *******          ***                       \n");
            printf("  **            *******           *******            **                      \n");
            printf(" **             *******           *******             **                     \n");
            printf(" **               ***               ***               **                    PARABENS           \n");
            printf("**                                                     **                    \n");
            printf("**       *                                     *       **         Voce acertou em %d tentativas\n", tentativa);
            printf("**      **                                     **      **                    \n");
            printf(" **   ****                                     ****   **                     \n");
            printf(" **      **                                   **      **                     \n");
            printf("  **       ***                             ***       **             TOTAL DE PONTOS: %.2f\n", pontos);
            printf("   ***       ****                       ****       ***                       \n");
            printf("     **         ******             ******         **                         \n");
            printf("      ***            ***************            ***                          \n");
            printf("        ****                                 ****                            \n");
            printf("           ****                           ****                               \n");
            printf("               ******               ******                                   \n");
            printf("                    *****************                                        \n");


    }

    else {



        printf(" $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$'               `$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$                           \n");
        printf(" $$$$$$$$$$$$$$$$$$$$$$$$$$$$'                   `$$$$$$$$$$$$$$$$$$$$$$$$$$$$                           \n");
        printf(" $$$'`$$$$$$$$$$$$$'`$$$$$$!                       !$$$$$$'`$$$$$$$$$$$$$'`$$$                           \n");
        printf(" $$$$  $$$$$$$$$$$  $$$$$$$                         $$$$$$$  $$$$$$$$$$$  $$$$          TROUXA           \n");
        printf(" $$$$. `$' \\' \\$`  $$$$$$$!                         !$$$$$$$  '$/ `/ `$' .$$$$                         \n");
        printf(" $$$$$. !\\  i  i .$$$$$$$$                           $$$$$$$$. i  i  /! .$$$$$      VOCE PERDEU!!!!     \n");
        printf(" $$$$$$   `--`--.$$$$$$$$$                           $$$$$$$$$.--'--'   $$$$$$                           \n");
        printf(" $$$$$$L        `$$$$$^^$$                           $$^^$$$$$'        J$$$$$$                           \n");
        printf(" $$$$$$$.   .'   ""~   $$$    $.                 .$  $$$   ~""   `.   .$$$$$$$                           \n");
        printf(" $$$$$$$$.  ;      .e$$$$$!    $$.             .$$  !$$$$$e,      ;  .$$$$$$$$                           \n");
        printf(" $$$$$$$$$   `.$$$$$$$$$$$$     $$$.         .$$$   $$$$$$$$$$$$.'   $$$$$$$$$                           \n");
        printf(" $$$$$$$$    .$$$$$$$$$$$$$!     $$`$$$$$$$$'$$    !$$$$$$$$$$$$$.    $$$$$$$$                           \n");
        printf(" $JT&yd$     $$$$$$$$$$$$$$$$.    $    $$    $   .$$$$$$$$$$$$$$$$     $$$$$$$                           \n");
        printf("                                  $    $$    $                                                           \n");
        printf("                                  $.   $$   .$                                                           \n");
        printf("                                  `$        $'                                                           \n");
        printf("                                   `$$$$$$$$'                                                            \n");
        printf("\n\n");
    }


    printf("\n==== FIM DE JOGO ====\n");

}
