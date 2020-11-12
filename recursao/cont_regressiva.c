#include <stdio.h>

void cont_down(int n) {
    if (n == 1)
        printf("1\n");
    else {
        printf("%d ", n);
        cont_down(n-1);
    }
}

void main() {
    int n;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &n);

    cont_down(n);
}
