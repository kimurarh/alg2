#include <stdio.h>

int fatorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * fatorial(n-1);
}

void main() {
    int n, fat;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &n);

    fat = fatorial(n);

    printf("Fatorial de %d = %d\n", n, fat);
}
