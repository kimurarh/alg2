#include <stdio.h>

int sum (int tam, int vetor[]) {
    if (tam == 1)
        return vetor[0];
    else 
        return vetor[tam-1] + sum(tam-1, vetor);
}

int main() {
    int vetor[5] = {10, 10, 10, 10, 10};
    
    printf("%d\n", sum(5, vetor));
}
