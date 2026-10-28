/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main() {
    int opcao;

    do {
        printf("\nMENU PRINCIPAL\n");
        printf("1 - Reserva de assentos do cinema\n");
        printf("- - - Atividades de fixação\n");
        printf("2 - Soma de matriz 2x3\n");
        printf("3 - Media de tres alunos\n");
        printf("4 - Contar numeros pares em matriz 3x3\n");
        printf("5 - Maior valor de matriz 3x3\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1: {
                int assentos[3][4] = {
                    {0, 1, 0, 0},
                    {1, 1, 0, 1},
                    {0, 0, 1, 0}
                };

                int acao, fileira, lugar;
                int i, j;

                do {
                    int ocupados = 0;

                    printf("\nCINEMA\n");
                    printf("    1 2 3 4\n");

                    for (i = 0; i < 3; i++) {
                        printf("%d - ", i + 1);

                        for (j = 0; j < 4; j++) {
                            printf("%d ", assentos[i][j]);
                            if (assentos[i][j] == 1)
                                ocupados++;
                        }

                        printf("\n");
                    }

                    printf("0 = disponivel | 1 = ocupado\n");
                    printf("Ocupados: %d\n", ocupados);
                    printf("Disponiveis: %d\n", 12 - ocupados);

                    printf("\n1 - Reservar assento\n");
                    printf("2 - Cancelar reserva\n");
                    printf("0 - Voltar ao menu\n");
                    printf("Escolha: ");
                    scanf("%d", &acao);

                    if (acao == 1 || acao == 2) {
                        printf("Digite a fileira (1 a 3): ");
                        scanf("%d", &fileira);

                        printf("Digite o assento (1 a 4): ");
                        scanf("%d", &lugar);

                        if (fileira < 1 || fileira > 3 ||
                            lugar < 1 || lugar > 4) {
                            printf("Fileira ou assento invalido!\n");
                        } else if (acao == 1) {
                            if (assentos[fileira - 1][lugar - 1] == 0) {
                                assentos[fileira - 1][lugar - 1] = 1;
                                printf("Reserva realizada com sucesso!\n");
                            } else {
                                printf("Esse assento ja esta ocupado!\n");
                            }
                        } else {
                            if (assentos[fileira - 1][lugar - 1] == 1) {
                                assentos[fileira - 1][lugar - 1] = 0;
                                printf("Reserva cancelada!\n");
                            } else {
                                printf("Esse assento ja esta disponivel!\n");
                            }
                        }
                    } else if (acao != 0) {
                        printf("Opcao invalida!\n");
                    }

                } while (acao != 0);

                break;
            }

            case 2: {
                int matriz[2][3];
                int soma = 0;
                int i, j;

                printf("\nSOMA DA MATRIZ 2x3\n");

                for (i = 0; i < 2; i++) {
                    for (j = 0; j < 3; j++) {
                        printf("Digite o valor [%d][%d]: ", i, j);
                        scanf("%d", &matriz[i][j]);
                        soma += matriz[i][j];
                    }
                }

                printf("Soma dos elementos: %d\n", soma);
                break;
            }

            case 3: {
                float notas[3][2];
                float media;
                int i, j;

                printf("\nMEDIA DOS ALUNOS\n");

                for (i = 0; i < 3; i++) {
                    printf("\nAluno %d\n", i + 1);

                    for (j = 0; j < 2; j++) {
                        printf("Nota da prova %d: ", j + 1);
                        scanf("%f", &notas[i][j]);
                    }
                }

                for (i = 0; i < 3; i++) {
                    media = (notas[i][0] + notas[i][1]) / 2.0;
                    printf("Media do aluno %d: %.2f\n",
                           i + 1, media);
                }

                break;
            }

            case 4: {
                int matriz[3][3];
                int pares = 0;
                int i, j;

                printf("\nCONTAR NUMEROS PARES\n");

                for (i = 0; i < 3; i++) {
                    for (j = 0; j < 3; j++) {
                        printf("Digite o valor [%d][%d]: ", i, j);
                        scanf("%d", &matriz[i][j]);

                        if (matriz[i][j] % 2 == 0) {
                            pares++;
                        }
                    }
                }

                printf("Quantidade de numeros pares: %d\n", pares);
                break;
            }

            case 5: {
                int matriz[3][3];
                int maior;
                int i, j;

                printf("\nMAIOR VALOR DA MATRIZ\n");

                for (i = 0; i < 3; i++) {
                    for (j = 0; j < 3; j++) {
                        printf("Digite o valor [%d][%d]: ", i, j);
                        scanf("%d", &matriz[i][j]);
                    }
                }

                maior = matriz[0][0];

                for (i = 0; i < 3; i++) {
                    for (j = 0; j < 3; j++) {
                        if (matriz[i][j] > maior) {
                            maior = matriz[i][j];
                        }
                    }
                }

                printf("Maior valor da matriz: %d\n", maior);
                break;
            }

            case 0:
                printf("Programa encerrado!\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }

    } while (opcao != 0);

    return 0;
}