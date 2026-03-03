//
// Created by aluno on 26/02/2026.
//
#include <stdio.h>
#include "interface.h"
#include <stdlib.h>

int listar_contatos(agenda_t* agenda) {
    for (int i = 0; i < agenda->tamanho; i++) {
        printf("Contato %d:\n", i + 1);
        printf("Nome: %s\n", agenda->contato[i].nome);
        printf("Telefone: %s\n", agenda->contato[i].telefone);
        printf("Idade: %d\n", agenda->contato[i].idade);
    }
    return 0;
}

int exibir_menu() {
    int opcao;
    printf("====== AGENDA DE CONTATOS ======\n");
    printf("1 - Adicionar contatos\n");
    printf("2 - Listar contatos\n");
    printf("3 - Buscar contato\n");
    printf("0 - Sair\n");
    printf("Digite sua opcao: ");
    scanf("%d", &opcao);
    return opcao;
}

char** solicitar_contato() {
    char** contato = malloc(3 * sizeof(char*));
    char* nome = malloc(80 * sizeof(char));
    char* telefone = malloc(20 * sizeof(char));
    char* idade = malloc(10 * sizeof(char));

    printf("Digite o nome do contato:\n");
    scanf("%s", nome);
    printf("Digite o telefone do contato:\n");
    scanf("%s", telefone);
    printf("Digite a idade do contato:\n");
    scanf("%s", idade);

    contato[0] = nome;
    contato[1] = telefone;
    contato[2] = idade;

    return contato;
}
