#include <stdio.h>

void dobrar(int *p) {
    *p = *p * 2;
}

int main() {
    int opcao;

        printf("1 - Endereco de memoria\n");
        printf("2 - Utilizando ponteiros\n");
        printf("3 - Alteracao de valores\n");
        printf("4 - Ponteiros e funcoes\n");
        printf("5 - Ponteiros e vetores\n");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1: {
                int numero;

                printf("\nDigite um numero inteiro: ");
                scanf("%d", &numero);

                printf("Valor: %d\n", numero);
                printf("Endereco de memoria: %p\n", (void *)&numero);

                break;
            }

            case 2: {
                int numero = 20;
                int *ponteiro = &numero;

                printf("\nValor da variavel: %d\n", numero);
                printf("Endereco da variavel: %p\n", (void *)&numero);
                printf("Valor acessado pelo ponteiro: %d\n", *ponteiro);

                break;
            }

            case 3: {
                int numero = 15;
                int *ponteiro = &numero;

                printf("\nValor antes da alteracao: %d\n", numero);

                *ponteiro = 50;

                printf("Valor depois da alteracao: %d\n", numero);

                break;
            }

            case 4: {
                int numero;

                printf("\nDigite um numero inteiro: ");
                scanf("%d", &numero);

                dobrar(&numero);

                printf("Valor dobrado: %d\n", numero);

                break;
            }

            case 5: {
                int numeros[5];
                int *ponteiro = numeros;

                printf("\nDigite cinco numeros inteiros:\n");

                for (int i = 0; i < 5; i++) {
                    printf("Numero %d: ", i + 1);
                    scanf("%d", &numeros[i]);
                }

                printf("\nElementos do vetor:\n");

                for (int i = 0; i < 5; i++) {
                    printf("%d\n", *(ponteiro + i));
                }

                break;
            }

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    return 0;
}
