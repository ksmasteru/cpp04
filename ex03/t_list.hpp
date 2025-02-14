#pragma once

#include "AMateria.hpp"
typedef struct s_list{
    AMateria *addrs;
    struct s_list *next;
}t_list;

void    list_addBack(t_list **head, AMateria *addrs);
t_list*    new_node(AMateria   *addrs);
void free_ls(t_list *head);