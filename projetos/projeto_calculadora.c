#include <stdio.h>

    void menu(){
    
        printf("Bem vindo a calculadora, escolha uma das opçoes abaixo\n");
        printf("1) ADIÇÃO\n");
        printf("2) SUBTRAÇÃO\n");
        printf("3) MULTIPLICAÇÃO\n");
        printf("4) DIVISÃO\n");
        printf("5) SAIR\n");
    }
    void escolha(int opcao){
        int numero1, numero2, resultado;
        switch (opcao)
        {
            case 1:
            printf("Opa! Escolheu adição? Boa! Em adição, nos somamos um numero utilizando a expressão +, selecione o primeiro numero:\n");
            scanf("%d", &numero1);
            printf("Boa, agora o segundo:\n");
            scanf("%d", &numero2);
            resultado = numero1 + numero2;
            printf("Aqui esta o seu resultado: %d\n", resultado);

            break;

            case 2: 
            printf("Subtração? Boa, na subtração, nos reduzimos os numeros com o sinal -, selecione o primeiro numero\n");
            scanf("%d", &numero1);
            printf("Agora o segundo\n");
            scanf("%d", &numero2);
            resultado = numero1 - numero2;
            printf("Aqui esta o seu resultado: %d\n", resultado);
            
            break;
        }
    }
    int main(){
        int opcao;
       do
       {
        menu();
        scanf("%d", &opcao);
        if (opcao != 5){
            escolha(opcao);
        }
       } while (opcao != 5);
            
        return 0;
    }
