#include <stdio.h>
    
   int main () {
        int numeroNORMAL = 2147483647; //Valor maximo do int
        long  int numerogrande = 2147483647;

        printf("Numero normal: %d\n", numeroNORMAL);
        printf("Numero grande: %ld\n", numerogrande);

        numerogrande = 2147483648;

        printf("Numero grande: %ld\n", numerogrande);

        return 0;
   }

