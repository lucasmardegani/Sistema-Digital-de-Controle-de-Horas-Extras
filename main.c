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

            case 2: //FAZ DA CASE 2 PRA BAIXO
                    //PRA RODAR O SISTEMA TODO ENTRA NO TERMINAL E DIGITA: gcc main.c -o sistema DEPOIS: .\sistema


        }
    }
}