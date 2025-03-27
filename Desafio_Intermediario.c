#include <stdio.h>
    
    int main () {

        // Colocando as variaveis.
        char estado1;
        char codigo1[50];
        char nome1[50];
        int populacao1;
        float area1;
        float pib1;
        int npt1;
        float densidadepopulacional1;
        float percap1;

        char estado2;
        char codigo2[50];
        char nome2[50];
        int populacao2;
        float area2;
        float pib2;
        int npt2;
        float densidadepopulacional2;
        float percap2;

        //Começando a utilizar o printf e o scanf junto!
        printf("Ola, peço para você que faça o cadastro de duas cartas, não se preocupe, vai ser rapido!\n");

        printf("Carta 1: \n");
        
        //Coloque o estado de A a Z, pode ser com letra maiuscula ou minuscula, nao pode caracteres.
        
        printf("Estado: ");
        scanf("%c", &estado1);
        
        //Agora, junte o estado e coloque 0 + um numero inteiro, ex: A01, Z09.

        printf("Codigo: ");
        scanf("%s", codigo1);

        //O nome da cidade, precisa ser JUNTO.

        printf("Nome da cidade: ");
        scanf("%s", nome1);

        //A população da cidade, sem a virgula e ponto, tudo junto.

        printf("População: ");
        scanf("%d", &populacao1);

        //Agora a area, precisa colocar o ponto, pois se colocar virgula, ira ter problemas no programa, e precisar ter 2 numeros apos a virgula.

        printf("Area: ");
        scanf("%f", &area1);

        //O pib é a mesma coisa da area, sem virgula.

        printf("PIB: ");
        scanf("%f", &pib1);

        //o NPT(Numero de pontos turisticos), utilize numeros inteiros de sua preferencia.

        printf("Numero de Pontos Turisticos: ");
        scanf("%d", &npt1);
         
        //Agora, vou fazer o segundo cadastro.

        printf("\nOtimo, Agora nos vamos fazer o segundo cadastro!\n");

        printf("\nCarta 2: \n");

        printf("Estado: ");
        scanf(" %c", &estado2);

        printf("Codigo: ");
        scanf("%s", codigo2);

        printf("Nome da cidade: ");
        scanf("%s", nome2);

        printf("População: ");
        scanf("%d", &populacao2);

        printf("Area: ");
        scanf("%f", &area2);

        printf("PIB: ");
        scanf("%f", &pib2);

        printf("Numero de Pontos Turisticos: ");
        scanf("%d", &npt2);

        densidadepopulacional1 = (float) populacao1 / area1; //Fiz o calculo da densidade populacional entre população e a area em km
        percap1 = (pib1 * 1000000000) / (float) populacao1;    //Fiz a multiplicação do pib cadastrado em 1 bilhão e dividir pela população

        densidadepopulacional2 = (float) populacao2 / area2;
        percap2 = (pib2 * 1000000000) / (float) populacao2; 

        //Agora, mostra o resultado para o usuario.

        printf("\nMaravilha, veja como ficou seu cadastro!\n");

        printf("\nCarta 1: \n");
        printf("Estado: %c\n", estado1);
        printf("Codigo: %s\n", codigo1);
        printf("Nome da cidade: %s\n", nome1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f Km²\n", area1);
        printf("PIB: R$%.2f\n", pib1);
        printf("Numero de Pontos turisticos: %d\n", npt1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
        printf("PIB per Capita: %.2f reais \n", percap1);

        //Agora o segundo resultado.

        printf("\nCarta 2: \n");
        printf("Estado: %c\n", estado2);
        printf("Codigo: %s\n", codigo2);
        printf("Nome da cidade: %s\n", nome2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f Km²\n", area2);
        printf("PIB: R$%.2f\n", pib2);
        printf("Numero de Pontos turisticos: %d\n", npt2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
        printf("PIB per Capita: %.2f reais \n", percap2);

        printf("\nCadastro concluido, Observe como ficou acima!");

        return 0;
    }
