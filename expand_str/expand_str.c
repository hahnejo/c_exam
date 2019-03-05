#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    expand_str(char *str)
{
    int i;
    int j;
    int start;

    start = 0;
    i = 0;
    while (str[i] && (str[i] == '\t' || str[i] == ' '))
        i++;
    start = i;
    while (str[start])
    {
        if (str[start] != '\t' && str[start] != ' ')
        {
            ft_putchar(str[start]);
            // printf("put\n");
        }
        else
        {
            // printf("else\n");
            while (str[start] == ' ' && str[start] == '\t')
                start++;
            if (str[start - 1] == ' ' && str[start - 1] == '\t')
            {
                ft_putchar(' ');
                ft_putchar(' ');
                ft_putchar(' ');
            }
        }
        start++;
    }
}

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        expand_str(argv[1]);
        ft_putchar('\n');
    }
    else
        ft_putchar('\n');
    return (0);
}