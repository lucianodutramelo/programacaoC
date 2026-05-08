<<<<<<< HEAD
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int escolhaJogador, escolhaComputador;

    srand(time(0)); // Inicializa o gerador de números aleatórios.  "Embaralha" o gerador com o tempo atual
    escolhaComputador = rand() % 3 + 1;  // Obtém número entre 1-3
    
    printf("\n\n\n\nJOGO DE JOKENPÔ\n\nVocê jogará contra o computador!\n\nEscolha: \n1 - Pedra\n2 - Papel\n3 - Tesoura\n\nDigite sua escolhe e tecle enter:");
    scanf("%d", &escolhaJogador);

    // Também possível utilizar OPERADORES LÓGICOS &&(e) e ||(ou) - ex: if ((escolhaJogador == 1) && (escolhaComputador == 2) ...
    switch (escolhaJogador){
        case 1:
            if (escolhaComputador == 2) { printf("\n\nO computador escolheu Papel, você perdeu!\n\n\n");
            } else if (escolhaComputador == 3) {  printf("\n\nVocê ganhou!! O compuador escolheu Tesoura.\n\n\n");
            } else { printf("\n\nDeu empate!! O compuador também escolheu Pedra.\n\n\n"); };
            break;
        case 2:
            if (escolhaComputador == 3) { printf("\n\nO computador escolheu Tesoura, você perdeu!\n\n\n");
            } else if (escolhaComputador == 1) {  printf("\n\nVocê ganhou!! O compuador escolheu Pedra.\n\n\n");
            } else { printf("\n\nDeu empate!! O compuador também escolheu Papel.\n\n\n"); };
            break;
        case 3:
           if (escolhaComputador == 1) { printf("\n\nO computador escolheu Pedra, você perdeu!\n\n\n");
            } else if (escolhaComputador == 2) {  printf("\n\nVocê ganhou!! O compuador escolheu Papel.\n\n\n");
            } else { printf("\n\nDeu empate!! O compuador também escolheu Tesoura.\n\n\n"); };
            break;
        default:
            printf("\n\nEscolha um opção válida, entre 1 e 3.\n\n");

    };

    return 0;
}
=======

>>>>>>> c09c28b7b214c1529be34de150c666a6cc39199f
