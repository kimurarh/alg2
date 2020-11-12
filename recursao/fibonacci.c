#include <stdio.h>

int fibo(int n) {
    if (n <= 1) 
        return n;
    else
        return fibo(n-1) + fibo(n-2);
}

void main() {
    int n;

    printf("Digite um numero inteiro positivo\n");
    scanf("%d", &n);

    printf("O %d numero da sequencia de fibonacci é %d\n", n, fibo(n));
}
