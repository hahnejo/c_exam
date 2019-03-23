// count before you get to first char.
// print that first char.
// now move next until next char. is char if not, print space.
//
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    epur_str(char *str)
{
    int i;
    int flag;

    flag = 0;
    i = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    while (str[i])
    {
        if ((str[i] == '\t' || str[i] == ' '))
            flag = 1;
        else
        {
            if (flag == 1)
            {
                ft_putchar(' ');
                ft_putchar(' ');
                ft_putchar(' ');
            }
            flag = 0;
            ft_putchar(str[i]);
        }
        i++;
    }
}

int     main(int argc, char **argv)
{
    if (argc == 2)
    {
        epur_str(argv[1]);
        ft_putchar('\n');
    }
    else
        return (-1);
    return (0);
}