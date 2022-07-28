#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * @size: size of the memory to print
 * @c: character to print
 *
 * Return: a pointer of array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}
