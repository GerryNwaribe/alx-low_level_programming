#include "variadic_functions.h"
/**
 * print_strings - prototype to print strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
    unsigned int x_idx = 0;  /* Index for iterating through the strings */
    va_list x_list;          /* Variable argument list */

    va_start(x_list, n);

    while (x_idx < n)  /* Loop through strings except the last one */
    {
        char *str = va_arg(x_list, char*);

        if (str != NULL)
            printf("%s", str);
        else
            printf("(nil)");

        if (x_idx != (n - 1) && separator != NULL)/* Check if not the last string */
            printf("%s", separator);

        x_idx++;
    }

    printf("\n");  /* Add a newline character at the end for formatting */
    va_end(x_list);
}

