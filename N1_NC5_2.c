 #include <stdio.h>

    int main () {
        char nome[20];

        printf("Coloque seu nome: ");
        fgets(nome, 20, stdin);
        printf("Nome e sobrenome digitado: %s\n", nome);

        return 0;
    }