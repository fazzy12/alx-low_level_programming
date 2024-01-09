#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
 * _strlen - Computes the length of a string.
 * @str: The string to compute the length of.
 *
 * Return: The length of the string.
 */
size_t _strlen(const char *str)
{
    size_t len = 0;

    while (str[len])
        len++;

    return (len);
}

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: Pointer to the pointer to the first node of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_node;


    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str);
    if (new_node->str == NULL) {
        free(new_node);
        return (NULL);
    }

    new_node->len = _strlen(str);


    new_node->next = *head;

    *head = new_node;

    return (new_node);
}
