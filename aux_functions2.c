#include "shellcito.h"

/**
 * changing_tab - changes tabs for spaces
 * @string: input string passed
 * Return: 0
 */

void changing_tab(char *string)
{
    int len = _strlen(string);
    int i = 0;

    for (; i < len; i++)
    {
        if (string[i] == '\t')
            string[i] = ' ';
    }
}

/**
 * count_spaces - count spaces
 * @string: input string passed
 * Return: count
 */

int count_spaces( char *string)
{
    int len = _strlen(string);
    int i = 0;
    int count = 0;

    for (; i < len; i++)
    {
        if (string[i] == ' ' && string[i + 1] != ' ' && string[i + 1] != '\n')
            count += 1;
    }
    return(count + 1);
}
/**
 * count_spaces - count spaces
 * @string: input string passed
 * Return: count
 */

int count_paths( char *string)
{
    int len = _strlen(string);
    int i = 0;
    int count = 0;

    for (; i < len; i++)
    {
        if (string[i] == ':')
            count += 1;
    }
    return(count + 1);
}