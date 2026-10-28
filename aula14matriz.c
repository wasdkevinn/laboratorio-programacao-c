/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

int main() {
    int opcao;
    int i, j;
    int matriz[3][3];
    int soma;

    printf("MENU DE QUESTOES\n");
    printf("1 - Matriz 2x2 com valores definidos\n");
    printf("2 - Matriz 2x2 com valores digitados\n");
    printf("3 - Somar elementos de uma matriz 3x3\n");
    printf("Escolha uma questao: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            matriz[0][0] = 1;
            matriz[0][1] = 2;
            matriz[1][0] = 3;
            matriz[1][1] = 4;

            printf("\nMatriz 2x2:\n");

            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    printf("%d\t", matriz[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            printf("\nDigite os 4 valores da matriz:\n");

            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    printf("Posicao [%d][%d]: ", i, j);
                    scanf("%d", &matriz[i][j]);
                }
            }

            printf("\nMatriz 2x2:\n");

            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    printf("%d\t", matriz[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            soma = 0;

            printf("\nDigite os 9 valores da matriz 3x3:\n");

            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    printf("Posicao [%d][%d]: ", i, j);
                    scanf("%d", &matriz[i][j]);
                    soma += matriz[i][j];
                }
            }

            printf("\nMatriz 3x3:\n");

            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    printf("%d\t", matriz[i][j]);
                }
                printf("\n");
            }

            printf("\nA soma de todos os elementos e: %d\n", soma);
            break;

        default:
            printf("\nOpcao invalida!\n");
    }

    return 0;
}
