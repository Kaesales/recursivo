#include <stdio.h>

int somatorio(int n){
    if (n == 0) {
        return 0; 
    } else {
        return n + somatorio(n - 1);
    }
}


int main(){
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);
    printf("A soma dos números de 1 até %d é igual a %d\n", x, somatorio(x));
    return 0;
}
