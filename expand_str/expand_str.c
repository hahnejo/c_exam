// Assignment name  : expand_str
// Expected files   : expand_str.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a string and displays it with exactly three spaces
// between each word, with no spaces or tabs either at the beginning or the end,
// followed by a newline.

// A word is a section of string delimited either by spaces/tabs, or by the
// start/end of the string.

// If the number of parameters is not 1, or if there are no words, simply display
// a newline.

// Examples:

// $> ./expand_str "vous   voyez   c'est   facile   d'afficher   la   meme   chose" | cat -e
// vous   voyez   c'est   facile   d'afficher   la   meme   chose$
// $> ./expand_str " seulement          la c'est      plus dur " | cat -e
// seulement   la   c'est   plus   dur$
// $> ./expand_str "comme c'est cocasse" "vous avez entendu, Mathilde ?" | cat -e
// $
// $> ./expand_str "" | cat -e
// $
// $>

/*
** 1. detect first space and return string with no space or tab in front of str
**
*/

#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    printf("strlen is : %d\n", i);
    return (i);
}

char    *get_start_n_end(char *str)
{
    int i;
    int start;
    int end;
    static char *new_str;

    new_str
    i = 0;
    start = 0;
    end = 0;
    while (str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    start = i;
    printf("start : %d\n", start);
    i = ft_strlen(str);
    while (str[i] && (str[i] == ' ' || str[i] == '\t') && i > 0)
    {
        printf("str[%d] = %c\n", i, str[i]);
        i--;
    }
    // printf("i : %d\n", i);
    end = i;
    // printf("end : %d\n", end);
    i = 0;
    while (start <= end)
    {
        new_str[i] = str[start];
        i++;
        start++;
    }
    return (new_str);
}

int     main(int argc, char **argv)
{
    char *new_str;

    if (argc == 2)
    {
        new_str = get_start_n_end(argv[1]);
        printf("new_str :%s\n", new_str);
        ft_putchar('\n');
    }
    else
    {
        ft_putchar('\n');
        return (-1);
    }
    return (0);
}