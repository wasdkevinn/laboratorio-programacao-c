#include <stdio.h>

// QUESTAO 1 - CALCULADORA



// QUESTAO 2 - MAIOR PRECO

float maiorPreco(float a, float b) {
    if (a > b)
        return a;
    else
        return b;
}

// QUESTAO 3 - PAR OU IMPAR

int verificarPar(int n) {
    if (n % 2 == 0)
        return 1;
    else
        return 0;
}

// QUESTAO 4 - DOBRO

int dobro(int n) {
    return n * 2;
}

// QUESTAO 5 - RELATORIO

void exibirLinha() {
    printf("**********\n");
}

// QUESTAO 6 - FATORIAL

int calcularFatorial(int n) {
    int fat = 1;

    for (int i = 1; i <= n; i++) {
        fat = fat * i;
    }

    return fat;
}


// MENU PRINCIPAL

int main() {
    int op;

    do {
        printf("\n===== MENU PRINCIPAL =====\n");
        printf("1 - Calculadora\n");
        printf("2 - Maior preco\n");
        printf("3 - Par ou impar\n");
        printf("4 - Dobro do estoque\n");
        printf("5 - Relatorio\n");
        printf("6 - Fatorial\n");
        printf("0 - Sair\n");
        printf("Escolha uma questao: ");

        scanf("%d", &op);

        switch (op) {
            case 1:

                break;

            case 2:
                float a, b;
            
                printf("Digite dois precos: ");
                scanf("%f %f", &a, &b);
            
                if (a == b) {
                    printf("Os precos sao iguais!\n");
                } else {
                    printf("Maior preco: %.2f\n", maiorPreco(a, b));
                }
                break;

            case 3:
                int n;
            
                printf("Digite um numero inteiro: ");
                scanf("%d", &n);
            
                if (verificarPar(n) == 1)
                    printf("Numero par!\n");
                else
                    printf("Numero impar!\n");
                break;

            case 4:
                int quantidade;
            
                printf("Digite a quantidade inicial: ");
                scanf("%d", &quantidade);
            
                printf("Quantidade inicial: %d\n", quantidade);
                printf("Quantidade final: %d\n", dobro(quantidade));
                break;

            case 5:
                exibirLinha();
                printf("RELATORIO\n");
                exibirLinha();
                break;

            case 6:
                int n;

                printf("Digite um numero de 0 a 12: ");
                scanf("%d", &n);
            
                if (n < 0 || n > 12) {
                    printf("Numero invalido!\n");
                } else {
                    printf("Fatorial: %d\n", calcularFatorial(n));
                }
                break;

            case 0:
                printf("Programa encerrado!\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }

    } while (op != 0);

    return 0;
}
