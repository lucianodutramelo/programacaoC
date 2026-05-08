#include <stdio.h>
#include <io.h>

int main(){
    char produtoA[30];
    unsigned int estoqueA;
    float valorProdutoA;
    unsigned int estoqueMinA;
    float valorTotalA;
    int ComparativoEstoqueVersusMinA;

    char produtoB[30];
    unsigned int estoqueB;
    float valorProdutoB;
    unsigned int estoqueMinB;
    float valorTotalB;
    int ComparativoEstoqueVersusMinB;

    printf("\n\n\n\nPRODUTO A\n");
    printf("Digite o nome do produto: "); scanf("%s", &produtoA);
    printf("\nValor do Produto: "); scanf("%f", &valorProdutoA);
    printf("\nEstoque: "); scanf("%u", &estoqueA);
    printf("\nEstoque Mínimo: "); scanf("%u", &estoqueMinA);
    ComparativoEstoqueVersusMinA = estoqueA >= estoqueMinA;
    printf("Tecle ENTER "); getchar(); getchar();

    printf("\n\nPRODUTO B\n");
    printf("Digite o nome do produto: "); scanf("%s", &produtoB);
    printf("\nValor do Produto: "); scanf("%f", &valorProdutoB);
    printf("\nEstoque: "); scanf("%u", &estoqueB);
    printf("\nEstoque Mínimo: "); scanf("%u", &estoqueMinB);
    ComparativoEstoqueVersusMinB = estoqueB >= estoqueMinB;
    printf("Tecle ENTER "); getchar(); getchar();

    printf("\n\n\nPRODUTO A (%s): valor de R$ %.2f, estoque de %u.", produtoA, valorProdutoA, estoqueA);
    printf("\nPRODUTO A (%s): valor total R$ %.2f, estoque > que o mínimo (%d)", produtoA, valorProdutoA*estoqueA, ComparativoEstoqueVersusMinA);

    printf("\n\n\nPRODUTO B (%s): valor de R$ %.2f, estoque de %u.", produtoB, valorProdutoB, estoqueB);
    printf("\nPRODUTO B (%s): valor total R$ %.2f, estoque > que o mínimo (%d)\n\n\n", produtoB, valorProdutoB*estoqueB, ComparativoEstoqueVersusMinB);

    return 0;
}