/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

int main()
{
    int opcao;
    printf("Aula 17 - Strings e Bibliotecas em Linguagem C\n");
    printf("1 - Cadastro de usuarios e perfis de acesso \n"); 
    printf("2 - Cadastro de produtos \n"); 
    printf("3 - Alunos e cursos \n");  
    printf("Digite o número da questão para testar: \n"); 
    scanf("%d", &opcao);
    
    
    
    switch (opcao) {
        case 1:
            char nome[50]; 
            printf("Digite seu nome: "); 
            scanf("%49s", nome); 
            
            char perfil[20]; 
            char copiaperfil[20];
            printf("Digite seu perfil: "); 
            scanf("%19s", perfil);
            
            strcpy(copiaperfil, perfil);
            
            printf("\nNome: %s\n", nome); 
            printf("Quantidade de caracteres: %zu\n", strlen(nome)); 
            if (strcmp(perfil, "ADMIN") == 0 || strcmp(perfil, "COMUM") == 0) {  
                printf("Perfil: %s\n", copiaperfil); 
            } else { 
                printf("Perfil: diferente de ADMIN ou COMUM.\n"); 
            }
            
            char mensagem[60] = "\nBem-vindo, ";
            strcat(mensagem, nome); 
            printf("%s!\n", mensagem); 
            printf("Cadastro realizado com sucesso! \n"); 
            break;
            
        case 2:
            char produto[50]; 
            printf("Digite o nome do produto: "); 
            scanf("%49s", produto); 
            
            char categoria[40]; 
            printf("Digite a categoria do produto: "); 
            scanf("%39s", categoria);
            
            
            printf("Produto: %s\n", produto); 
            printf("Caracteres: %zu\n", strlen(produto)); 
            if (strcmp(categoria, "HARDWARE") == 0) {  
                printf("Categoria: Hardware\n"); 
            } else if (strcmp(categoria, "PERIFERICO") == 0) { 
                printf("Categoria: Periférico\n"); 
            }
            else {
                printf("Categoria: diferente de HARDWARE ou PERIFERICO.\n"); 
            }
            
            char copiaproduto[50];
            strcpy(copiaproduto, produto);
            
            char mensagemdois[60] = "\nProduto: ";
            strcat(mensagemdois, copiaproduto); 
            printf("%s!\n", mensagemdois); 
            printf("Cadastro realizado com sucesso! \n"); 
            break;
            
        case 3:
             char estudante[50]; 
            printf("Nome do estudante: "); 
            scanf("%49s", estudante); 
            
            char codigo[40]; 
            printf("Código do curso: "); 
            scanf("%39s", codigo);
            
            
            printf("\nEstudante: %s\n", estudante); 
            if (strcmp(codigo, "CC") == 0) {  
                printf("Curso: Ciência da Computação\n"); 
            } else if (strcmp(codigo, "SI") == 0) { 
                printf("Curso: Sistemas de Informação\n"); 
            }
            else {
                printf("Curso: diferente de Ciência da Computação ou Sistemas de Informação.\n"); 
            }
            printf("Caracteres no nome: %zu\n", strlen(estudante)); 
            
            char copianome[50];
            strcpy(copianome, estudante);
            
            char mensagemtres[60] = "\nOlá, ";
            strcat(mensagemtres, copianome); 
            printf("%s!\n", mensagemtres); 
            break;
        default:
            // Código executado se nenhum dos cases corresponder
    }

    return 0;
}