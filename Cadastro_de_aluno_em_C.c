#include <stdio.h>

    int main () {
        int idade, matricula;
        float altura;
        char nome[50];

        printf("Digite sua idade: \n");
        scanf("%d", &idade)

        printf("Digite sua altura: \n");
        scanf("%f", &altura);

        printf("Digite seu nome: \n");
        fgets(nome, 50, stdin);

        printf("Digite o numero de matricula: \n");
        scanf("%d", &matricula);

        printf("Nome do aluno: %s - Matricula: %d", nome, matricula);
        printf("Idade: %d - Altura: %.2f", idade, altura);

        return 0;
    }
