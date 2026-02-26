//
// Created by aluno on 26/02/2026.
//
#include <stdio.h>
#include "interface.h"
#include "agenda.h"

typedef struct contato {
    char* nome;
    char* telefone;
    int idade;
} contato_t;

typedef struct agenda {
    contato_t* contato;
    int tamanho;
} agenda_t;

int init_agenda() {
    int opcao = 9;
    while (opcao != 0) {
        opcao = exibir_menu();
        switch (opcao) {
            case 1:
                printf("\nAdicionando contato...\n");
                break;
            case 2:
                printf("\nListando contato...\n");
                break;
            case 3:
                printf("\nBuscando contato...\n");
                break;
            case 0:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpcao invalida\n");
        }
    }

    return 0;
}