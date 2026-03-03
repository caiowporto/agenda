#include "agenda.h"
#ifndef AGENDA_INTERFACE_H
#define AGENDA_INTERFACE_H

int exibir_menu();

char** solicitar_contato();

int listar_contatos(agenda_t*);

#endif //AGENDA_INTERFACE_H