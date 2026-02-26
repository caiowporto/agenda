//
// Created by aluno on 26/02/2026.
//
#include <stdio.h>
#include "interface.h"
#include "agenda.h"

#include <stdlib.h>

typedef struct contato {
    char* nome;
    char* telefone;
    int idade;
} contato_t;

typedef struct agenda {
    contato_t* contato;
    int tamanho;
} agenda_t;

int adicionar_contato(agenda_t* agenda) {

    solicitar_contato();

    return 0;
};

int init_agenda() {
    agenda_t* agenda = malloc(sizeof(agenda_t));
    agenda->contato = malloc(100 * sizeof(contato_t));
    agenda->tamanho = 0;

    int opcao = 9;

    while (opcao != 0) {
        opcao = exibir_menu();
        switch (opcao) {
            case 1:
                adicionar_contato(agenda);
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
                // TODO implementar liberação de memória
                break;
            default:
                printf("\nOpcao invalida\n");
        }
    }

    return 0;
}