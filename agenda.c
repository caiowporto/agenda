//
// Created by aluno on 26/02/2026.
//

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