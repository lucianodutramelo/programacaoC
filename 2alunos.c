#include <stdio.h>

int main() {
    char nome[50];
    char nome2[50];
    int matricula, idade;
    float altura;

    printf("Digite o seu nome (fgets): ");
    fgets(nome,50,stdin);
    printf("\n");
    printf("Digite o seu nome (scanf): ");
    scanf("%s", &nome2);
    printf("\n");

    printf("Digite a sua matrícula: ");
    scanf("%d", &matricula);
    printf("\n");

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("\n");
    
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("\n");

    printf("\n\nFOI ESCRITO \nNome (fgets): %s\nNome (scanf): %s\n", nome, nome2);
    printf("Matrícula: %d\nIdade: %d\nAltura: %.2f", matricula, idade, altura);

    return 0;
}