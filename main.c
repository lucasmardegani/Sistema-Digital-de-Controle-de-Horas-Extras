#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Funcionario {
    char nome[50];
    int horasExtras;
};

int main() {
    struct Funcionario funcionarios[50];
    int total = 0;
    int opcao;

    do {
        printf("\n=== SISTEMA DE CONTROLE DE HORAS EXTRAS ===\n");
        printf("1 - Cadastrar funcionarios\n");
        printf("2 - Registrar horas extras\n");
        printf("3 - Mostrar relatorio\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch(opcao) {
            case 1:
                printf("Digite o nome do funcionario: ");
                fgets(funcionarios[total].nome, 50, stdin);
                funcionarios[total].nome[strcspn(funcionarios[total].nome, "\n")] = 0;
                funcionarios[total].horasExtras = 0;
                total++;
                printf("Funcionarios cadastrado com sucesso!\n");
                break;

            case 2:
            if (total == 0){
                printf("Nenhum funcionário cadastrado ainda.\n");
                break;
            }
            printf("Digie o numero do funcionario (0 a %d):", total - 1);
            int id;
            scanf("%d", &id);
            if (id >= 0 && id < total) {
                printf("Digite a quantidade de horas extras: ");
                int horas;
                scanf("%d", &horas);
                funcionarios[id].horasExtras += horas;
                printf("Horas registradas com sucesso!\n");
            } else {
                printf("Funcionário inválido!\n");
            }
            break;
            
            
            case 3:
            printf("\n--- RELATÓRIO DE HORAS EXTRAS ---\n");
            for (int i = 0; i <total; i++){
                printf("%d - %s: %d horas\n", i, funcionarios[i].nome, funcionarios[i].horasExtras);
            }
            break;

            case 0:
            printf("Encerrando o programa...\n");
            break;

            default:
            printf("Opcao invalida.\n");
            }

        } while (opcao !=0);

        return 0;
    }
