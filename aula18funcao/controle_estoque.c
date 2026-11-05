#include <stdio.h>

int dobro(int n) {
    return n * 2;
}


int main()
{
    int quantidade;
            
    printf("Digite a quantidade inicial: ");
    scanf("%d", &quantidade);
            
    printf("Quantidade inicial: %d\n", quantidade);
    printf("Quantidade final: %d\n", dobro(quantidade));

    return 0;
}