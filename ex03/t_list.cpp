#include "t_list.hpp"
#include "AMateria.hpp"

void    list_addBack(t_list **head, AMateria* addrs)
{
    if (*head == nullptr)
        *head = new_node(addrs); 
    t_list *tmp = *head;
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new_node(addrs);
}

t_list*    new_node(AMateria   *addrs)
{
    t_list *new_node = new t_list();
    new_node->addrs = addrs;
    new_node->next = nullptr;
    return (new_node);
}

void free_ls(t_list *head)
{
    t_list *tmp = head;
    t_list *holder;

    while (tmp->next)
    {
        holder = tmp->next;
        delete tmp->addrs;
        delete tmp;
        tmp = holder;
    }
}