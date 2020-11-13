#include <stdio.h>

void cont_down_up(int n) {
    if (n == 1)
        printf("1");
    else {
        printf("%d ", n);
        cont_down_up(n-1);
        printf(" %d", n);
    }
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &n);

    cont_down_up(n);
    printf("\n");
}
