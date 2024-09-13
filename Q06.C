#include <stdio.h>

int soma(int n[], int i) {
    if (i == 0) {
        return n[0];
    } else {
        return n[i] + soma(n, i - 1);
    }
}

float media(int n[], int tamanho) {
    int total = soma(n, tamanho - 1);
    return (float) total / tamanho;
}

int main() {
    int x[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Digite um número: ");
        scanf("%d", &x[i]);
    }
    
    printf("A média dos números é: %.2f\n", media(x, 5));
    
    return 0;
}
