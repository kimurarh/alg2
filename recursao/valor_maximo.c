#include <stdio.h>

int maximo (int n, int v[]) {
    if (n == 1)
        return v[0];
    else {
        int x;
        x = maximo(n-1, v);

        if (x > v[n-1])
            return x;
        else
            return v[n-1];
    }
}

int main() {
    int notas[5] = {70, 80, 95, 90, 69};

    printf("%d\n", maximo(5, notas));
}
