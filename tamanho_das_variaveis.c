#include <stdio.h>

    int main () {

        printf("Tamanho do int: %u bytes\n", sizeof(int));
        printf("Tamanho do long int: %u bytes\n", sizeof(long int));
        printf("Tamanho do long long int: %u bytes\n", sizeof(long long int));
        printf("Tamanho do double: %u bytes\n", sizeof(double));
        printf("Tamanho do long double: %u bytes\n", sizeof(long double));
        printf("Tamanho do short: %u bytes\n", sizeof(short));
        return 0;
    }
