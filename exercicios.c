#include <stdio.h>

int main() {
    int soma = 0;

    for (int i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("A soma de 1 ate 100 e: %d\n", soma);

    return 0;
}
