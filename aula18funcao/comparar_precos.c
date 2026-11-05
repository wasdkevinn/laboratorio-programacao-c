#include <stdio.h>

float maiorPreco(float a, float b) {
    if (a > b)
        return a;
    else
        return b;
}


int main()
{
    float a, b;
            
    printf("Digite dois precos: ");
    scanf("%f %f", &a, &b);
            
    if (a == b) {
        printf("Os precos sao iguais!\n");
    } else {
        printf("Maior preco: %.2f\n", maiorPreco(a, b));
    }

    return 0;
}