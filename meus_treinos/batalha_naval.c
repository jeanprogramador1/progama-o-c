#include <stdio.h>
    int main(){
        char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
        int coluna[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int matriz[10][10];

            printf("----TABELA BATALHA NAVAL----\n");

            
            for(int i = 0; i < 10; i++){
                printf("%c ", linha[i]);
            }

            for(int j = 0; j < 10; j++){

                printf("\n%d ", coluna[j]);
            }
            
        }