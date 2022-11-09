/*
** EPITECH PROJECT, 2022
** my_params_to_list
** File description:
** day11
*/

#include "include/my.h"
#include "include/mylist.h"
#include <stdlib.h>

linked_list_t *my_params_to_list(int ac, char *const *av)
{
    linked_list_t *list = NULL;
    linked_list_t *new_list;
    for (int i = 0; i < ac; i++) {
        new_list = malloc(sizeof(*new_list));
        new_list->data = av[i];
        new_list->next = list;
        list = new_list;
    }
    return list;
}
