#include <stdio.h>

    int main () {
        //Implementando as variaveis para a comparação
        char produtoA[30] = "Produto A";
        char produtoB[30] = "Produto B";

        unsigned int estoqueA = 1000;
        unsigned int estoqueB = 2000;

        float valorA = 10.50;
        float valorB = 20.40;

        unsigned int estoqueMinimoA = 500;
        unsigned int estoqueMinimoB = 2500;

        double ValorTotalA;
        double ValorTotalB;

        int resultadoA;
        int resultadoB;

        //Exibir os produtos
        printf("O produto %s tem estoque %u e o valor unitario é R$ %.2f.\n", produtoA, estoqueA, valorA);
        printf("O produto %s tem estoque %u e o valor unitario é R$ %.2f.\n", produtoB, estoqueB, valorB);

        resultadoA = estoqueA > estoqueMinimoA;
        resultadoB = estoqueB > estoqueMinimoB;

        //Comparações com os estoques minimos
        printf("O produto %s tem estoque minimo %d\n", produtoA ,resultadoA);
        printf("O produto %s tem estoque minimo %d\n", produtoB, resultadoB);

        //Comparaçoes entre os produtos
        printf("O produto A (R$ %.2f) é maior do que B(R$ %.2f): %d\n?", estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));

    }