#include <stdio.h>
#include <io.h>
//#include <fcntl.h>

int main(){
    // _setmode(_fileno(stdout), _O_U8TEXT);
    // modificadores signed, UNSIGNED, LONG e SHORT
    // ATENÇÃO HÁ DIFERENÇA ENTRE WINDOWS E LINUX!! COMPARAR COM O GITHUB (LINUX)""""

    // SIGNED: pouco usado, pois indica que a variável pode ser positiva OU negativa (normal de todas)
    // UNSIGNED: apenas positivas
        // unsigned: duplica o buffler de armazenamento e limita para apenas positivos
        // variáveis int vão de -2 bilhões (-2.147.483.648) a +2 bilhões (+2.147.483.647)
        // Logo unsigned int vai de 0 a 4 bilhões (0 a 4.294.967.295)
        // E unsigned char vai de 0 a 255 (pois o char puro vai de -128 a 127)

    // int, LONG int, LONG LONG int:
        // A variável int ocupa 4 bytes de memória. 
        // A variável LONG int: 4 bytes no WINDOWS! E 8 bytes no LINUX! 
        // O LONG LONG int ocupa 8 bytes.

    // float, DOUBLE, LONG DOUBLE (variáveis de precisão):
        // O FLOAT ocupa 4 bytes. Casas decimais de até 6 dígitos.
        // O DOUBLE ocupa 8 bytes. Casas decimais de até 15 dígitos.
        // O LONG DOUBLE ocupa 16 bytes. Casas decimais de até 18 dígitos.

    // exemplo de UNSIGNED:
    int numeroSinal = 3000000000; // Ocorrerá um overflow: aparecerá na saída como um número negativo, pois extrapolou o limite positivo
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("\n\nA VAR INT POSSUI 4 BYTES E OS LIMITES EM NRS DECIMAIS SÃO: -2.147.483.648 até +2.147.483.647.");
        printf ("\n\nA tentativa de armazenamento de 3.000.000.000 (bem maior que +2.147.483.647) em var int restou em: %ld\n\n",numeroSinal);
    
    // WINDOWS: Não faz diferença utilizar INT ou LONG INT, visto que os dois possuem 4 bytes (para manter compatibilidade com Win32)
    // GITHUB (linux): Faz diferença.
    int NumeroInt = 2147483648;
        long int NumeroLongInt = 2147483648L;
        long long int NumeroLongLongInt = 2147483648LL;
        printf("\nSIMULANDO ERRO DE OVERFLOW COM LIMITE POSITIVO + 1 (ou seja +2.147.483.648):");
        printf("\n\nNúmero inteiro regular (int): %d\n", NumeroInt);
        printf("Número longo (long int): %ld\n", NumeroLongInt);
        printf("Número longo (long long int): %lld\n", NumeroLongLongInt);
        printf("\nPressione ENTER"); getchar();

        
    float NumeroFloat = 3.123456789012345; // O FLOAT ocupa 4 bytes. Casas decimais de até 6 dígitos.
        double NumeroDouble = 3.123456789012345; // O DOUBLE ocupa 8 bytes. Casas decimais de até 15 dígitos.
        long double NumeroLongDouble = 3.123456789012345L; // O LONG DOUBLE ocupa 16 bytes. Casas decimais de até 18 dígitos.
        printf("\n\nSIMULANDO ERRO DE OVERFLOW COM float, DOUBLE, LONG DOUBLE - O NÚMERO CERTO É 3.123456789012345");
        printf("\nATENTAR EM QUE CASA O OCORRE O OVERFLOW EM CADA CASO");
        printf("\nO NÚMERO CERTO É 3.123456789012345 (casas decimais em sequência)\n");
        printf("\nNúmero com FLOAT (número com casas decimais de até 6 dígitos): %.16f\n", NumeroFloat);
        printf("Número DOUBLE (número MUITO preciso, até 15 dígitos): %.16f\n", NumeroDouble);
        // workaround para long double no MinGW: converter para double para exibir
        printf("Número LONG DOUBLE: %.16Lf\n", NumeroLongDouble);
        printf("OBS: No MinGW o LONG DOUBLE com overflow retorna ZERO.\n\n");
        printf("Para exibir no MinGW um LONG DOUBLE estourado, a var precisa\n ser convertida para double assim: %.16Lf\n", (double)NumeroLongDouble);
        printf("\nPressione ENTER"); getchar();


    unsigned int UNSIGNEDNumeroInt = 2147483648; // unsigned é uma conversão da variável liberando buffer?
        unsigned long int UNSIGNEDNumeroLongInt = 2147483648L;
        unsigned long long int UNSIGNEDNumeroLongLongInt = 2147483648LL;
        printf("\n\nSIMULANDO ERRO DE OVERFLOW COM UNSIGNED INT");
        printf("\nNúmero inteiro UNSIGNED (int): %u\n", UNSIGNEDNumeroInt);
        printf("Número UNSIGNED long int: %lu\n", UNSIGNEDNumeroLongInt);
        printf("Número UNSIGNED long long int: %llu\n", UNSIGNEDNumeroLongLongInt);
        printf("\nPressione ENTER"); getchar();

    short int SHORTInt = 32767;
        short int SHORTIntOverFlow = 32768;
        printf("\n\nSIMULANDO ERRO DE OVERFLOW COM SHORT INT - TIPO DE VARIÁVEL PARA AMBIENTES DE MEMÓRIA LIMITADA");
        printf("\nO SHORT INT POSSUI 2 BYTES, OU 16 BITS, OU 65.536 NÚMEROS DECIMAIS");
        printf("\n\nO limite numérico do SHORT int é de -32768 até %d\n", SHORTInt);
        printf("Número 32768 armazenado numa SHORT int retorna: %d\n", SHORTIntOverFlow);
        printf("\nPressione ENTER"); getchar();

    printf("\n\nIMPRIMINTO BYTES DE ARMAZENAMENTO POR TIPO");
        printf("\n\nO tamanho do int é: %u bytes\n", sizeof(int)); // 4 bytes
        printf("O tamanho do long int é: %u bytes\n", sizeof(long int)); // No Windwos (MinGW/GCC): 4 bytes; Linux (GitHub): 8 bytes
        printf("O tamanho do long long int é: %u bytes\n", sizeof(long long int));
        printf("\n\nO tamanho do float é: %u bytes\n", sizeof(float));
        printf("O tamanho do double é: %u bytes\n", sizeof(double));
        printf("O tamanho do long double é: %u bytes\n", sizeof(long double));
        printf("\n\nO tamanho do UNSIGNED int é: %u bytes\n", sizeof(unsigned int)); // 4 bytes
        printf("O tamanho do UNSIGNED long int é: %u bytes\n", sizeof(unsigned long int)); // No Windwos (MinGW/GCC): 4 bytes; Linux (GitHub): 8 bytes
        printf("O tamanho do UNSIGNED long long int é: %u bytes\n", sizeof(unsigned long long int));
        printf("O tamanho do SHORT int é: %u bytes\n", sizeof(short int));
        printf("\n\nTecle ENTER para encerrar"); getchar ();
   return 0;
}