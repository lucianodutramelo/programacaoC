#include <stdio.h>

/* ESTRUTURAS DE DECISÃO
1. DECISÃO SIMPLES
    if ( x > y ){
        printf("...")
    };

    OBS: não vai ";" após o "}" do if

    EXTRA (PARIDADE) - Verificação de número PAR: utilzando operador %. 
        % retorna o resto de uma divisão.
            5 % 2 retorna 1
            8 % 2 retorna 0
        Por exemplo: if ( 4 % 2 == 0 {printf("O resto de 4/2 é 0, logo 4 é par")}


2. DECISÃO COMPOSTA
    if ( x <= y) {
        ...
    } else {
        ... 
    };

    OBS: não vai ";" após o "}" do if

3. OPERADORES LÓGICOS
        Em C apenas o 0 é FALSO; Todos os outros decimais, incluindo 1, são VERDADEIROS.

    - A && A - E convencional
        if (a > 0 && b > 0) {
        printf("Ambos são positivos.\n");
        };

    - A || B (OU) - Ou convencional (verdadeiro se pelo menos um for verdadeiro)
        if (a > 0 || b > 0) {
        printf("Pelo menos um é positivo.\n");
        };

    - !A - NÃO Lógico de A
        if (!a) {
        printf("a é zero.\n");
        };

    - A ^ B (XOR) - Ou exclusivo (verdadeiro quando apenas um é verdadeiro)


4. DECISÃO ENCADEADA
    if (condicao1) {
        // Código a ser executado se condicao1 for verdadeira
    } else if (condicao2) {
        // Código a ser executado se condicao1 for falsa e condicao2 for verdadeira
    } else {
        // Código a ser executado se todas as condições anteriores forem falsas
    };

4. DECISÃO ANINHADA (UMA DENTRO DA OUTRA)
    if (condicao1) {
        if (condicao2) {
            // Código a ser executado se condicao1 e condicao2 forem verdadeiras
        }
    };

5. USO DO SWITCH E MENUS INTERATIVOS
    A estrutura switch em C é usada para simplificar o processo de seleção de uma entre várias opções possíveis. 

    scanf("%d", &opcao);
    switch (opcao) {
    case 1:
        printf("Saldo atual: R$ 1.000,00\n");
        break;
    case 2:
        printf("Depósito realizado com sucesso\n");
        break;
    case 3:
        printf("Saque realizado com sucesso\n");
        break;
    default:
        printf("Opção inválida\n");
    };

    O break em cada case evita que o programa continue a executar os cases seguintes. 
    O default é executado quando nenhum dos casos anteriores for verdadeiro. É opcional.

6. GERAÇÃO DE NÚMEROS RANDÔMICOS E TIME
    - A  função "srand(time(0))"": é chamada para inicializar o gerador de números aleatórios com base no tempo atual.
    - A expressão "rand() % 10 + 1": rand() gera um número aleatório inteiro, e o operador % 10 limita esse número ao 
    intervalo de 0 a 9. Adicionando 1, obtemos um número entre 1 e 10.
    - Necessitam das bibliotecas: time.h  e  stdlib.h

      srand(time(0));
      numeroSecreto = rand() % 10 + 1;
      printf("Adivinhe o número (entre 1 e 10): \n");
      scanf("%d", &palpite);

      if (palpite == numeroSecreto) {
        printf("Parabéns! Você acertou!\n");
      } else {
        printf("Você errou. O número era %d.\n", numeroSecreto);
      };

_________________________ HORA DE CODAR  -  AVENTUREIRO ________________

7. OPERADOR TERNÁRIO (if-else simplicado)
    condicao ? valor_se_verdadeiro : valor_se_falso;

    Exemplos:
    printf("Carta 2 venceu? (%s)\n", DensPop2 > DensPop ? "Sim" : "Não")

    OU 

    char *resultado;
    resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";
    printf("Resultado: %s\n", resultado);

    OU

    char *estado;
    estado = (temperatura > 30) ? "Calor" : "Frio";

8. INTEGRAÇÃO DE ESTRUTURAS DE DECISÃO


*/


