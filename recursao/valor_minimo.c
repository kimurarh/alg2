#include <stdio.h>

int minimo(int tam, int v[]) {
    if (tam == 1)
        return v[0];
    else {
        int x = minimo(tam-1, v);
        if (x < v[tam-1])
           return x;
        else
           return v[tam-1]; 
    }
}

int main() {
    int tam = 5;
    int vetor[5] = {45, 33, 78, 99, 55};

    printf("%d\n", minimo(tam, vetor));
}
