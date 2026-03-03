//
// Created by aluno on 26/02/2026.
//

#ifndef AGENDA_AGENDA_H
#define AGENDA_AGENDA_H

typedef struct contato {
    char* nome;
    char* telefone;
    int idade;
} contato_t;

typedef struct agenda {
    contato_t* contato;
    int tamanho;
} agenda_t;

int init_agenda();

#endif //AGENDA_AGENDA_H