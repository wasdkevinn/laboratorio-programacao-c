
#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
    int horasExtras;
} Funcionario;

int main() {
    FILE *arquivo;
    int opcao, i, matricula, numero;
    int numeros[5];
    char nome[50];
    Funcionario funcionario;

    printf("===== MENU PRINCIPAL =====\n");
    printf("1 - Cadastro de funcionarios\n");
    printf("2 - Gravar e ler numeros\n");
    printf("3 - Cadastro com struct\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            arquivo = fopen("funcionarios.txt", "w");

            if (arquivo == NULL) {
                printf("Erro ao abrir arquivo!\n");
                return 1;
            }

            for (i = 0; i < 5; i++) {
                printf("\nFuncionario %d\n", i + 1);

                printf("Nome: ");
                scanf(" %49[^\n]", nome);

                printf("Matricula: ");
                scanf("%d", &matricula);

                fprintf(arquivo, "Nome: %s | Matricula: %d\n",
                        nome, matricula);
            }

            fclose(arquivo);

            printf("\nDados gravados com sucesso!\n");
            break;

        case 2:
            arquivo = fopen("numeros.txt", "w");

            if (arquivo == NULL) {
                printf("Erro ao abrir arquivo!\n");
                return 1;
            }

            for (i = 0; i < 5; i++) {
                printf("Digite o %d numero: ", i + 1);
                scanf("%d", &numeros[i]);

                fprintf(arquivo, "%d\n", numeros[i]);
            }

            fclose(arquivo);

            arquivo = fopen("numeros.txt", "r");

            if (arquivo == NULL) {
                printf("Erro ao ler arquivo!\n");
                return 1;
            }

            printf("\nNumeros armazenados:\n");

            while (fscanf(arquivo, "%d", &numero) == 1) {
                printf("%d\n", numero);
            }

            fclose(arquivo);
            break;

        case 3:
            arquivo = fopen("funcionarios.txt", "a");

            if (arquivo == NULL) {
                printf("Erro ao abrir arquivo!\n");
                return 1;
            }

            for (i = 0; i < 5; i++) {
                printf("\nFuncionario %d\n", i + 1);

                printf("Nome: ");
                scanf(" %49[^\n]", funcionario.nome);

                printf("Salario: ");
                scanf("%f", &funcionario.salario);

                printf("Horas extras: ");
                scanf("%d", &funcionario.horasExtras);

                fprintf(arquivo, "%s;%.2f;%d\n",
                        funcionario.nome,
                        funcionario.salario,
                        funcionario.horasExtras);
            }

            fclose(arquivo);

            arquivo = fopen("funcionarios.txt", "r");

            if (arquivo == NULL) {
                printf("Erro ao ler arquivo!\n");
                return 1;
            }

            printf("\nFuncionarios cadastrados\n");

            while (fscanf(arquivo, " %49[^;];%f;%d",
                          funcionario.nome,
                          &funcionario.salario,
                          &funcionario.horasExtras) == 3) {

                printf("\nNome: %s\n", funcionario.nome);
                printf("Salario: R$ %.2f\n", funcionario.salario);
                printf("Horas extras: %d\n",
                       funcionario.horasExtras);
            }

            fclose(arquivo);
            break;

        default:
            printf("\nOpcao invalida!\n");
            break;
    }

    return 0;
}
