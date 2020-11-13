#include <stdio.h>

float pot(float x, int n) {
    if (n == 0) 
        return 1.0;
    else
        return x * pot(x, n-1);
}


int main() {
    float x;
    int n;

    printf("Digite um numero e a potencia: \n");
    scanf("%f %d", &x, &n);

    printf("%.2f elevado a %d = %.2f\n", x, n, pot(x, n));
}
