#include <stdio.h>
#include <string.h>

int main(){
    int idade;
    float altura;
    float altura2;
    char opcao;
    char nome[20];
    // sintaxe scanf
    // scanf("formato1" "formato2,&variavel1,variavel2,...);

    printf("\nDigite a idade: ");
    scanf("%i", &idade); // & antes de cada variável faz guardar o dado na posição correta de memória
    printf("A idade é: %d\n\n", idade);

    printf("\nDigite a altura: ");
    scanf("%f", &altura);
    printf("A altura é: %f\n\n", altura);

    printf("\nDigite a altura2: ");
    scanf("%f", &altura2);
    printf("A altura2 é: %.2f\n\n", altura2); // %.2f - ponto flutuante com duas casas decimais

    printf("Digite seu nome :");
    scanf(" %s", &nome);
    printf("\nO nome é: %s\n\n", nome);

    printf("Digite a opção:");
    scanf(" %c", &opcao); /*Diferença entre "%c" e " %c" (com espaço antes): 
    a linguagem entende o ENTER como um caracter. 
    Portanto, quando o scan vai ler o "%c" ele somente retorna o ENTER dado no final.
    Para resolver o problema, devemos colocar o " %c" (com espaço antes) e ele guarda somente o primeiro caractere digitado*/ 
    printf("A opção é: %c\n", opcao);

    char nomecompleto[50];
    printf("\nDigite seu nome completo: ");
    fgets(nomecompleto, 50, stdin);
        // Lê no máximo 49 caracteres da entrada padrão (stdin)
        // fgets inclui o '\n' na string, então podemos removê-lo se necessário
    printf("\n\nNome completo digitado (com enter): %s\n", nomecompleto);
    nomecompleto[strcspn(nomecompleto, "\n")] = '\0';  //necessário #include <string.h>
    printf("Nome completo digitado (uso do strcspn para retirar o 'barra n'): %s\n", nomecompleto);
 
    return 0;
    /*
    fgets recebe três argumentos:
    O array onde a string será armazenada.
    O tamanho máximo da string (incluindo o \n e o \0).
    O fluxo de entrada (geralmente stdin para a entrada padrão do teclado).
    */

    /*
    fgets e Regex em C - Principais Pontos:
        Leitura Segura (fgets): fgets(buffer, tamanho, arquivo) lê até tamanho-1 caracteres ou até o caractere de nova linha (\n), incluindo-o.
        Biblioteca Regex (<regex.h>): Permite criar padrões para validação ou extração de dados da string lida.
        Fluxo de Trabalho:
        Ler: Use fgets() para armazenar a entrada em uma string (array de char).
        Compilar: Use regcomp() para compilar o padrão de busca (regex).
        Executar: Use regexec() para comparar a string lida com o padrão.
        Liberar: Use regfree() para liberar a memória alocada para a regex.
        
    Diferença fgets x gets: fgets é seguro pois define o limite de leitura, enquanto gets é obsoleto e inseguro
    */

    return 0;
    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)
    */

}