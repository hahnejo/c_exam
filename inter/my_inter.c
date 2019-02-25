#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     check_for_dup(char *str, int index)
{
    int i = 0;
    while (i < index)
    {
        if (str[i] == str[index])
            return (-1);
        i++;
    }
    return (0);
}

int   main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    if (argc == 3)
    {
        while (argv[1][i])
        {
            if (check_for_dup(argv[1], i) == -1)
                i++;
            j = 0;
            while (argv[2][j])
            {
                if (argv[1][i] == argv[2][j])
                {
                    ft_putchar(argv[1][i]);
                    break ;
                }
                j++;
            }
            i++;
        }
        ft_putchar('\n');
    }
    else
        ft_putchar('\n');
    return (0);
}