
#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float salario;
} Funcionario;

int main(void) {

    Funcionario funcionario1, funcionario2;
    printf("CADASTRO DO FUNCIONARIO 1\n");

    printf("Digite o nome: ");
    scanf(" %49[^\n]", funcionario1.nome);

    printf("Digite a idade: ");
    scanf("%d", &funcionario1.idade);

    printf("Digite o salario: ");
    scanf("%f", &funcionario1.salario);

    printf("\nCADASTRO DO FUNCIONARIO 2\n");

    printf("Digite o nome: ");
    scanf(" %49[^\n]", funcionario2.nome);

    printf("Digite a idade: ");
    scanf("%d", &funcionario2.idade);

    printf("Digite o salario: ");
    scanf("%f", &funcionario2.salario);

    printf("\n--- DADOS CADASTRADOS ---\n");

    printf("\nFuncionario 1:\nNome: %s\nIdade: %d\nSalario: R$ %.2f\n",
           funcionario1.nome, funcionario1.idade, funcionario1.salario);

    printf("\nFuncionario 2:\nNome: %s\nIdade: %d\nSalario: R$ %.2f\n",
           funcionario2.nome, funcionario2.idade, funcionario2.salario);


    if (funcionario1.salario > funcionario2.salario) {

        printf("Maior salario: %s\n", funcionario1.nome);

        printf("Diferenca salarial: R$ %.2f\n",
               funcionario1.salario - funcionario2.salario);

    } else if (funcionario2.salario > funcionario1.salario) {

        printf("Maior salario: %s\n", funcionario2.nome);

        printf("Diferenca salarial: R$ %.2f\n",
               funcionario2.salario - funcionario1.salario);

    } else {

        printf("Os dois funcionarios recebem o mesmo salario!\n");

    }

    return 0;
}
