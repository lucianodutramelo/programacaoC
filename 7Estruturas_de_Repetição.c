/*
ESTRUTURAS DE REPETIÇÃO (LOOP)

1. WHILE
    while (condição) {
        // bloco de código a ser executado repetidamente
    }


        int i = 1;
        while (i <= 5) {
            printf("%d\n", i);
            i++;
        }


2. DO-WHILE
    
    O DO-WHILE, diferente do while SEMPRE executará o bloco uma primeira vez. O while somente executa a primeira vez se a condição já começar verdadeira
    Isso tem sentido, pois a condicionante, o while, vai no FINAL do bloco.

    int i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);


3. FOR
    Quando se sabe, de antemão, quantas vezes o loop deve ser executado

    for (inicialização; condição; incremento) {
        // bloco de código a ser executado repetidamente
    }

    - inicialização: Executada uma vez no início do loop. É geralmente usada para declarar e inicializar a variável de controle do loop.
    - condição: Avaliada antes de cada iteração. Se a condição for verdadeira, o bloco de código dentro do for é executado. Se for falsa, o loop termina.
    - incremento: Executado após cada iteração do bloco de código. É usado para atualizar a variável de controle.

    int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    return 0;
    }

    int main() {
    for (int i = 0; i <= 100; i += 10) {
        printf("%d\n", i);
    }
    return 0;
    }



________________________


4. LOOPS ANINHADOS



________________________


5. FORMAS AVANÇADAS DE DECLARAR LOOPS


6. RECURSIVIDADE



*/