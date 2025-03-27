#include <stdio.h>

    int main () {
        float nota1, nota2, nota3;
        float media;
        
        printf("*** Programa de Cálculo de Média ***\n");
        
        printf("Digite a primeira nota do aluno: "); 
        scanf(" %f", &nota1);

        printf("Digite a segunda nota do aluno: ");
        scanf(" %f", &nota2);

        printf("Digita a terceira nota do aluno: ");
        scanf(" %f", &nota3);

        media = (nota1 + nota2 + nota3) / 3;

        printf("A média dos valores é: %.2f", media);
        return 0;
    }
