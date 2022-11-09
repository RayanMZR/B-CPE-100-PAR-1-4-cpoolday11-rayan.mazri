/*
** EPITECH PROJECT, 2022
** my_list_size.c
** File description:
** day11
*/

#include "include/my.h"
#include "include/mylist.h"
#include <stdlib.h>
#include <stdio.h>

linked_list_t *my_params_to_list(int ac, char *const *av);

int my_list_size(linked_list_t const *begin)
{
    int i = 0;
    for (i = 0; begin != NULL; i++)
        begin = begin->next;
    return i;
}
