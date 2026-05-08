#include <stdio.h>

int main(){
    int idade = 25;
    float altura = 1.75;
    char opcao = 'S';
    char nome[20] = "Luciano";

    printf("\nQual a idade?  Idade: ");
    scanf("%i", &idade);


    printf("\nA idade do %s é: %d\n", nome, idade);
    printf("A altura é: %f\n", altura);
    printf("A altura é: %.2f\n", altura);
    printf("A opção é: %c\n", opcao);
    printf("A opção é: \n\n", opcao); // sem especificador não imprime a variável



    /*

%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere. Definição de char s[] (array de caracteres) é diferente de char *s (ponteiro para caractere)
%s: Imprime uma cadeia (string) de caracteres.
%u: para unsigned int
%lu: unsigned long int (ex.: scanf("%lu", &Populacao);).
%lf: double (Entrada: %lf; Saída apenaas f: %f ou %.2f)
%Lf: long double (%Lf para saída ou entrada)
%hd: short int
    */
}