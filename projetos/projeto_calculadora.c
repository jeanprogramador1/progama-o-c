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
        float numero1, numero2;
        float resultado;
        switch (opcao)
        {
            case 1:
            printf("Opa! Escolheu adição? Boa! Em adição, nos somamos um numero utilizando a expressão +, selecione o primeiro numero:\n");
            scanf("%f", &numero1);
            printf("Boa, agora o segundo:\n");
            scanf("%f", &numero2);
            resultado = numero1 + numero2;
            printf("Então %.0f + %.0f = %.0f!!\n", numero1, numero2, resultado);

            break;

            case 2: 
            printf("Subtração? Boa, na subtração, nos reduzimos os numeros com o sinal -, selecione o primeiro numero\n");
            scanf("%f", &numero1);
            printf("Agora o segundo\n");
            scanf("%f", &numero2);
            resultado = numero1 - numero2;
            printf("Então %.0f - %.0f = %.0f!!\n", numero1, numero2, resultado);
            
            break;

            case 3: 
            printf("Multiplicação? Ok, para multiplicar um numero é necessario somar ele pela mesma quantidade de vezes\n");
            printf("Por exemplo: 3x5= 15, eu somei o numero 3, 5 vezes\n");
            printf("Agora você, coloque o primeiro numero: \n");
            scanf("%f", &numero1);
            printf("Agora o segundo: \n");
            scanf("%f", &numero2);

            resultado = numero1 * numero2;

            printf("Então %.0f x %.0f = %.0f!!\n", numero1, numero2, resultado);

            break;
            case 4:
            printf("Divisão...(é serio?), bom, na divisão voce vai dividir o numero pela 'metade' dele mesmo\n");
            printf("Por exemplo: 4/2 = 2, vamos lá, coloque o primeiro numero\n");
            scanf("%f", &numero1);
            printf("Agora o segundo\n");
            scanf("%f", &numero2);
            if(numero2 == 0){
                printf("NAO É POSSIVEL DIVIDIR POR 0");
            }
            else{
            resultado = (float) numero1 / numero2;
            printf("Então seu resultado deu %.2f!!\n", resultado);
            }
           
            break;

            case 5:
            printf("Saindo do programa, obrigado por utilizar :3.....\n");
            break;

            default:

            printf("UAI, numero errado, tente novamente\n");

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
