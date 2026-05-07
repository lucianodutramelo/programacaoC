#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*
PRINCIPAIS BIBLIOTECAS BÁSICAS
<stdio.h> (Entrada e saída padrão)
    printf: Imprime dados formatados na saída padrão.
    scanf: Lê dados formatados da entrada padrão.
    fopen, fclose: Abre e fecha arquivos.
    fprintf, fscanf: Imprime/lê dados formatados em arquivos.
    gets, puts: Lê/escreve strings (obs.: gets é obsoleto por segurança).
<stdlib.h> (Funções utilitárias gerais)
    malloc, free: Aloca e libera memória dinamicamente.
    atoi, atof: Converte strings para inteiros ou floats.
    rand, srand: Gera números pseudo-aleatórios.
    exit: Termina o programa.
    system: Executa comandos do sistema.
<time.h> (Manipulação de tempo e datas)
    time: Retorna o tempo atual.
    ctime: Converte tempo para string legível.
    difftime: Calcula diferença entre tempos.
    clock: Mede tempo de CPU usado.
<string.h> (Manipulação de strings)
    strcpy, strncpy: Copia strings.
    strlen: Retorna o comprimento de uma string.
    strcmp, strncmp: Compara strings.
    strcat, strncat: Concatena strings.
    memset, memcpy, memmove: Manipula blocos de memória.
<math.h> (Funções matemáticas)
    sin, cos, tan: Funções trigonométricas.
    sqrt: Raiz quadrada.
    pow: Potenciação.
    log, exp: Logaritmo e exponencial.
    ceil, floor: Arredondamento para cima/baixo.
<ctype.h> (Classificação e conversão de caracteres)
    isalpha, isdigit, isalnum: Verifica se o caractere é letra, dígito ou alfanumérico.
    islower, isupper: Verifica maiúsculas/minúsculas.
    tolower, toupper: Converte para minúscula/maiúscula.
<assert.h> (Asserções para depuração)
    assert: Verifica condições em tempo de execução (desabilitado em release).
<errno.h> (Tratamento de erros)
    errno: Variável global para códigos de erro.
<limits.h> (Limites de tipos inteiros)
    Constantes como INT_MAX, INT_MIN, CHAR_MAX: Limites de tipos inteiros.
<float.h> (Limites de tipos de ponto flutuante)
    Constantes como FLT_MAX, DBL_MAX: Limites de floats e doubles.
<stddef.h> (Definições padrão)
    Tipos como size_t, ptrdiff_t; macro NULL.
<locale.h> (Suporte a localidade)
    setlocale: Define configurações regionais.
<signal.h> (Tratamento de sinais)
    signal, raise: Manipula sinais do sistema.
<setjmp.h> (Saltos não locais)
    setjmp, longjmp: Salta para pontos específicos no código.
<stdarg.h> (Argumentos variáveis)
    va_start, va_arg, va_end: Manipula funções com argumentos variáveis (como printf).
*/

int main(){
    short int jogador, computador;
    char Opcao;

    // srand inicializa o gerador aleatório com a semente do número do tempo atual - time(0)
    srand(time(0)); // time (0) ou time(NULL) retorna o tempo atual como formato numérico
    computador = rand() % 100 + 1; // % retorna o resto da divisão. % 100 o resto por 100

    // Interagindo com o jogador
    printf("\n\n\n\n\n\n\n\n\nJOGO DE MAIOR, MENOR OU IGUAL\n\n\n");
    printf("Pense em um número entre 1 e 100 enquanto eu penso em outro...\n\n\n");
    printf("Quando decidir, tecle ENTER. "); getchar();
    printf("\n\n\nPerfeito, eu também já escolhi o meu e prometo que não irei mudar...\n\n Agora digite o número e tecle enter: ");
    scanf("%hd", &jogador);

    // verificando validade
    if ((jogador > 100) || (jogador < 1)) { printf("\n\n\nEscolha fora do limite entre 1 e 100. Reinicie o jogo e escolha um número corretamente para continuar. \n\n\n"); exit(0);};

    // Escolhendo a comparação
    printf("\n\n\nTudo bem... Já sei os dois números...\n\nAgora, qual a sua aposta? O seu número é maior ou menor que o meu?\n\n");
    printf("M. Maior\nN. Menor\n\nDigite a opção desejada: M para Maior ou N para Menor (depois tecle enter): "); scanf(" %c",&Opcao); // " %c" lê um único caractere e ignorar whitespace (\0).

    // verificando validade
    if ((Opcao != 'M') && (Opcao != 'N') &&  (Opcao != 'm') && (Opcao != 'n')) { 
        printf("\n\n\nOpções válidas somente M ou N. Reinicie o jogo e escolha corretamente. \n\n\n"); exit(0);};
        // Áspas simples para CARACTER armazenado por " %c". Áspas duplas para STRINGS armazenados por " %s"
    
    // Comparando apostas e apresentando resultados
    if (jogador == computador) {
        printf("\n\n\nPARABÉNS!!!!!\n\n\nVOCÊ É MUITO SORTUDO! ACERTOU EXTAMENTE O NÚMERO QUE PENSEI!\n\n\n");
        
    } else if (Opcao == 'M' || Opcao == 'm') { printf("\n\nVocê %s !!", jogador > computador ? "GANHOU" : "perdeu");
    } else { printf("\n\nVocê %s !!", jogador < computador ? "GANHOU" : "perdeu");
    };

    printf("\n\nEu pensei em: %hd\nE você escolheu: %hd\n\n\n\n\n\n", computador, jogador);

    return 0;
}