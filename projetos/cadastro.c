#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
    void menu(){
        printf("Bem vindo, vamos cadastra-lo, escolha uma das opções: \n");
        printf("1) Cadastrar e-mail\n");
        printf("2) Randomizar senha\n");
        printf("3) Cadastrar usuario\n");
        printf("4) Sair\n");
    }

    void selecao(int opcao){
        char nomedoemail[30], enderecodoemail[30];
        char senha[6];
        char nome[20], sobrenome[20];
            switch (opcao)
            {
            case 1:
                printf("Ok, vamos cadastra seu email, digite seu Nome: \n");
                scanf("%29s", nomedoemail);
                printf("Digite o Endereço\n");
                scanf("%29s", enderecodoemail);
                
                strcat(nomedoemail, "@");
                strcat(nomedoemail, enderecodoemail);
                strcat(nomedoemail, ".com");

                printf("Seu email cadastrado é: %s\n", nomedoemail);

                break;
            case 2:
                /*
                    A intenção é randomizar o numero colocado pelo usuario
                */
                    printf("Vamos Criar uma Senha aleatoria\n");
                    int num_da_senha;
                        printf("Digite o tamanho da senha(1 a 5)\n");
                        scanf("%d", &num_da_senha);
                        if(num_da_senha < 1 || num_da_senha > 5){
                            printf("Numero invalido, tente de novo!\n");
                            num_da_senha = 5;
                        }
                        for(int i = 0; i < num_da_senha; i++){
                            senha[i] = '0' + (rand() % 10);
                        }
                        senha[num_da_senha] = '\0';

                        printf("Sua senha aleatoria criada é: %s\n", senha);
                        break;

            case 3:
                    printf("Vamos cadastra-lo!\n");
                    printf("Digite seu nome: \n");
                    scanf("%19s", nome);
                    printf("Agora seu sobrenome: \n");
                    scanf("%19s", sobrenome);
                    
                    strcat(nome, sobrenome);
                    
                    printf("Usuario: %s\n", nome);

                    break;
            case 4:
                    printf("Saindo, ate mais :D!");
                    
                    break;
            default:
                    printf("Opção errada, tente denovo(idiota >:< )\n");
                    
                    break;
            }         
        
    }
    int main(){
        int opcao;
            do{
                menu();
                scanf("%d", &opcao);

                if(opcao != 4){
                    selecao(opcao);
                }

            } while(opcao != 4);
            return 0;
    }