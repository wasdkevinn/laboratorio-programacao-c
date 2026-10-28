/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

int main() {
    int opcao, i, contador;
    char palavra[100];
    char nome[100];

    printf("AULA 16 - STRING EM C\n");
    printf("1 - Contar caracteres\n");
    printf("2 - Ler nome completo\n");
    printf("3 - Mostrar primeiro caractere\n");
    printf("4 - Exibir cada caractere em uma linha\n");
    printf("5 - Contar vogais minusculas\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            contador = 0;

            printf("Digite uma palavra: ");
            scanf("%99s", palavra);

            for (i = 0; palavra[i] != '\0'; i++) {
                contador++;
            }

            printf("Quantidade de caracteres: %d\n", contador);
            break;

        case 2:
            printf("Digite seu nome completo: ");
            scanf(" %99[^\n]", nome);

            printf("Nome completo: %s\n", nome);
            break;

        case 3:
            printf("Digite uma palavra: ");
            scanf("%99s", palavra);

            printf("Primeiro caractere: %c\n", palavra[0]);
            break;

        case 4:
            printf("Digite uma palavra: ");
            scanf("%99s", palavra);

            for (i = 0; palavra[i] != '\0'; i++) {
                printf("%c\n", palavra[i]);
            }
            break;

        case 5:
            contador = 0;

            printf("Digite uma palavra: ");
            scanf("%99s", palavra);

            for (i = 0; palavra[i] != '\0'; i++) {
                if (palavra[i] == 'a' ||
                    palavra[i] == 'e' ||
                    palavra[i] == 'i' ||
                    palavra[i] == 'o' ||
                    palavra[i] == 'u') {
                    contador++;
                }
            }

            printf("Quantidade de vogais: %d\n", contador);
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}