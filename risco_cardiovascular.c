#include <stdio.h>
#include <string.h>

#define MAX 5


int calcularPontuacao(float fatores[]) {
    int pontos = 0;

    // Pontuacao 3
    // Idade
    if (fatores[0] >= 65)
        pontos += 3;

    // Pressao arterial
    if (fatores[1] >= 160)
        pontos += 3;

    // Tabagismo
    if (fatores[2] == 1)
        pontos += 3;

    // Pontuacao 2
    // Diabetes
    if (fatores[3] == 1)
        pontos += 2;

    // Historico de doença cardíaca
    if (fatores[4] == 1)
        pontos += 2;

    // Colesterol LDL
    if (fatores[5] >= 160)
        pontos += 2;
     
        
    // Calculo do IMC
    float peso = fatores[6];
    float altura = fatores[7];
    float imc = peso / (altura * altura);
    
    if (imc >= 30)
        pontos += 2;
        
    // Pontuacao 1
    // Sedentarismo
    if (fatores[8] == 1)
        pontos += 1;
        
    // Alimentação rica em ultraprocessados
    if (fatores[9] == 1)
        pontos += 1;
        
    // Estresse crônico elevado
    if (fatores[10] == 1)
        pontos += 1;
        
    // Sono inadequado
    if (fatores[11] == 1)
        pontos += 1;
        
    // Sexo biológico masculino
    if (fatores[12] == 1)
        pontos += 1;
        
    return pontos;
}

void classificarRisco(int pontos, char risco[]) {

    if (pontos <= 4)
        strcpy(risco, "Menor de 10%");
    else if (pontos <= 9)
        strcpy(risco, "Entre 10% e 20%");
    else if (pontos <= 14)
        strcpy(risco, "Entre 20% e 30%");
    else if (pontos <= 18)
        strcpy(risco, "Entre 30% e 50%");
    else
        strcpy(risco, "Acima de 50%");
}

void apresentarResultados(char nomes[][50],
                          int pontuacoes[],
                          char classificacoes[][40],
                          int quantidade) {

    printf("\nRESULTADO DO REGISTRO E ANALISE DE RISCO CARDIOVASCULAR\n");

    printf("Quantidade de pacientes: %d\n", quantidade);

    for (int i = 0; i < quantidade; i++) {

        printf("Paciente %d\n", i + 1);
        printf("Nome: %s\n", nomes[i]);
        printf("Pontuacao: %d pontos\n", pontuacoes[i]);
        printf("Classificacao: %s\n\n", classificacoes[i]);
    }
}


int main()
{
    char nomes[MAX][50];
    float fatores[MAX][13];
    int pontuacoes[MAX];
    char classificacoes[MAX][40];

    int quantidade;

    printf("REGISTRO DE RISCO CARDIOVASCULAR\n");

    printf("Quantos pacientes deseja cadastrar (maximo 5)? ");
    scanf("%d", &quantidade);

    getchar();

    for (int i = 0; i < quantidade; i++) {

        printf("\n===== PACIENTE %d =====\n", i + 1);

        printf("Nome do paciente: ");
        fgets(nomes[i], 50, stdin);

        nomes[i][strcspn(nomes[i], "\n")] = '\0';

        printf("Idade: ");
        scanf("%f", &fatores[i][0]);

        printf("Pressao arterial sistolica (mmHg): ");
        scanf("%f", &fatores[i][1]);

        printf("Tabagismo (1 = Sim / 0 = Nao): ");
        scanf("%f", &fatores[i][2]);

        printf("Diabetes (1 = Sim / 0 = Nao): ");
        scanf("%f", &fatores[i][3]);

        printf("Histórico de doença cardíaca (1 = Sim / 0 = Nao): ");
        scanf("%f", &fatores[i][4]);

        printf("Colesterol LDL (mg/dL): ");
        scanf("%f", &fatores[i][5]);
        
        printf("Peso (kg): ");
        scanf("%f", &fatores[i][6]);
        
        printf("Altura (m): ");
        scanf("%f", &fatores[i][7]);
        
        printf("Sedentarismo (1 = Sim / 0 = Nao): ");
        scanf("%f", &fatores[i][8]);
        
        printf("Alimentação risca em ultraprocessados (1 = Sim / 0 = Nao): ");
        scanf("%f", &fatores[i][9]);
        
        printf("Estresse crônico elevado (1 = Sim / 0 = Nao): ");
        scanf("%f", &fatores[i][10]);
        
        printf("Sono inadequado (1 = Sim / 0 = Nao): ");
        scanf("%f", &fatores[i][11]);
        
        printf("Sexo biológico masculino (1 = Sim / 0 = Nao): ");
        scanf("%f", &fatores[i][12]);
        
        getchar();

        pontuacoes[i] = calcularPontuacao(fatores[i]);

        classificarRisco(pontuacoes[i], classificacoes[i]);
    }

    // Apresenta os resultados finais
    apresentarResultados(nomes, pontuacoes,
                         classificacoes, quantidade);

    return 0;
}