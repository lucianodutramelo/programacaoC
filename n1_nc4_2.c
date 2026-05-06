#include <stdio.h>

int main(){

    int idade =25.00;
    float altura = 1.70;
    char opcao = 'S';
    char nome[20] = "Luciano";

    printf ("A idade do %s é: %d\n", nome, idade);
    printf ("A altura é: %e\n", altura);
    printf ("A opção é: %c\n", opcao);
        /*

%d: Imprime um inteiro no formato decimal.
%i: Equivalente a %d.
%f: Imprime um número de ponto flutuante no formato padrão.
%e: Imprime um número de ponto flutuante na notação científica.
%c: Imprime um único caractere.
%s: Imprime uma cadeia (string) de caracteres.
    
    */
}