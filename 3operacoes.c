#include <stdio.h>
#include <stdlib.h>

int main(){
    int a; int b;
        // ENTRADA DE VARIÁVEIS
        // system("cls");    // Limpa a tela no windows. P/ Linux o Clear. Mas não fica legal no terminal VSCode
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n"); //Opção fulera para limpar a tela ;-)
        printf("SERÃO REALIZADAS OPEÇÕES SIMPLES, DE ATRIBUIÇÃO E DE INCREMENTO PARA VARIÁVEIS ABAIXO");
        printf("\nDigite o valor para A: "); scanf(" %d", &a);
        printf("\nDigite o valor para B: "); scanf(" %d", &b);
        
    int b1=b; int b2=b; int b3=b; int b4=b; 
    int soma; int dif; int mult; float div; //OPERAÇÕES SIMPLES

    int somaatribAcom4=a; int difatribAcom4=a; int multatribAcom4=a; float divatribAcom4=a; //OP DE ATRIBUIÇÃO

    int posincrementoB=0; int preincrementoB=0; //OP DE INCREMENTO
    int posdecrementoB=0; int predecrementoB=0;


    // OPERAÇÕES SIMPLES
    soma = a + b;
    dif = b - a;
    mult = b * a;
    div = (float)b/a; // Como a e b são inteiros, apenas dividir sem converter descartaria o decimal
    // Chama-se de conversão de dados explícita (ou cast), pois existem casos em que o sistema converte implicitamente (exemplo de implícita: um float = um int + um float)
    // Todas as formas convertem em float o resultado: div = (float)b/a; div=b/(float)a; div=(float)b/(float)a

    // OP DE ATRIBUIÇÃO: X += Y (Opera os valores de X e Y e atribui na variável principal, X
    somaatribAcom4 += 4;
    difatribAcom4 -= 4;
    multatribAcom4 *= 4;
    divatribAcom4 /= 4;

    // OP DE POS(IN)CREMENTO: X = Y++ (Atribui a X o valor de Y e, POSTERIORMENTE, Incrementa/Decrementa o próprio Y)
    // OP DE PRE(IN)CREMENTO: X = ++Y (PREVIAMENTE Incrementa/Decrementa o próprio Y, depois Atribui a X o valor de Y)
    posincrementoB = b1++;
    posdecrementoB = b2--;
    preincrementoB = ++b3;
    predecrementoB = --b4;

    // SAÍDA DE RESULTADOS
    printf("\n\n\n\n SERÃO REALIZADAS OPERAÇÕES CONFORME ABAIXO");
    printf("\nValor de a: %d    e    Valor de b: %d", a, b);

    printf("\n\nOPERAÇÕES SIMPLES\n");
    printf("soma = a + b = %d    dif = b - a = %d    mult = b * a = %d    div = b/a = %.2f\n", soma, dif, mult, div);

    printf("\n\nPressione Enter para continuar..."); getchar(); getchar(); // getchar() Espera Enter, 
            // Porque 2 getchar(): como tem scanf() anterior, fica um NEWLINE (\n) no buffer de entrada e precisa ser absorvido pelo primeiro getchar.

    printf("\n\nOPERAÇÕES DE ATRIBUIÇÃO: X += Y (Opera os valores de X e Y e atribui na variável principal, X\n");
    printf("Se fosse a += 4, a ficaria = %d    Se fosse a -= 4, a ficaria = %d \n", somaatribAcom4, difatribAcom4);
    printf("Se fosse a *= 4, a ficaria = %d    Se fosse a /= 4, a ficaria = %.2f \n", multatribAcom4, divatribAcom4);

    // system("pause");  // Pause do windows (forma alternativa de pause) (erro no VScode: o system altera o padrão UTF-8 do VS => caracteres ilegíveis)
    printf("\n\nPressione Enter para continuar..."); getchar();

    printf("\n\nOPERAÇÕES DE POS(IN/dec)CREMENTO: X = Y++ (Atribui a X o valor de Y e, POSTERIORMENTE, Incrementa/Decrementa o próprio Y)\n");
    printf("Sendo b = %d antes das possíveis POS operações, b ficaria assim após qualquer das operações:\n", b);
    printf("Se fosse POSincrementoB = b++,  ficaria:  POSincrementoB = %d  e b = %d\n", posincrementoB, b1);
    printf("Se fosse POSdecrementoB = b--,  ficaria:  POSdecrementoB = %d  e b = %d\n", posincrementoB, b2);
    printf("\n\nOPERAÇÕES DE PRE(IN/dec)CREMENTO: X = ++Y (PREVIAMENTE Incrementa/Decrementa o próprio Y, depois Atribui a X o valor de Y)\n");
    printf("Se fosse PREincrementoB = ++b,  ficaria:  PREincrementoB = %d  e b = %d\n", preincrementoB, b3);
    printf("Se fosse PREdecrementoB = --b,  ficaria:  PREdecrementoB = %d  e b = %d\n\n\n\n", predecrementoB, b4);

    return 0;
}