#include <stdio.h>

int calcularFatorial(int n) {
    int fat = 1;

    for (int i = 1; i <= n; i++) {
        fat = fat * i;
    }

    return fat;
}


int main()
{
    int n;

    printf("Digite um numero de 0 a 12: ");
    scanf("%d", &n);
            
    if (n < 0 || n > 12) {
        printf("Numero invalido!\n");
    } else {
        printf("Fatorial: %d\n", calcularFatorial(n));
    }

    return 0;
}