#include <stdio.h>

int crescente(int n){
    if(n > 0){
        crescente(n - 1);
        printf("%d", n);
    }
}


int main(){
    int x;
    printf("Digite um número: ");
    scanf("%d", &x);
    printf("%d ",  crescente(x));
    return 0;
}


