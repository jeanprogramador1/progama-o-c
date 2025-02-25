 #include <stdio.h>

    int main () {
        int idade = 18;
        float altura = 1.76;
        char opcao = 'D';
        char nome[20] = "Jean";
        
        printf(" A idade de %s é: %d\n", nome, idade);
        printf("A altura é: %e\n", altura);
        printf("A opção é: %c\n", opcao);

        return 0;
    }