#include <stdio.h>

int verificarPar(int n) {
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}


int main()
{
    int n;
            
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
            
    if (verificarPar(n) == 1)
        printf("Numero par!\n");
    else
        printf("Numero impar!\n");

    return 0;
}