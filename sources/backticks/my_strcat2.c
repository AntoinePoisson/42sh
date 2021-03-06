/*
** EPITECH PROJECT, 2019
** minishell2
** File description:
** my_strcat2.c
*/

#include <stdlib.h>
#include <stddef.h>

int my_strlen(char const *str);

char *my_strcat2(char *dest, char *src)
{
    char *result;
    int total_len = my_strlen(src) + my_strlen(dest);
    int i = 0;

    if (dest == NULL)
        return (src);
    if (src == NULL)
        return (dest);
    if (!(result = malloc(sizeof(char) * (total_len + 1))))
        return (NULL);
    result[total_len] = '\0';
    for (int j = 0; dest[j]; j++)
        result[i++] = dest[j];
    for (int k = 0; src[k]; k++)
        result[i++] = src[k];
    return (result);
}
