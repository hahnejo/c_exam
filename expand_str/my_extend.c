#include <unistd.h>

// 1. first iterate until we meet a first character.
// 2. if we meet tab or space, flag.
// 3. if there is a flag, print 3 spaces.
// 4. 

void    ft_putchar(char a)
{
    write(1, &a, 1);
}

int     main(int argc, char **argv)
{
    int i;
    int flag;

    i = 0;
    flag = 0;
    while (argv[1][i] == '\t' || argv[1][i] == ' ')
        i++;
    while (argv[1][i])
    {
        if (argv[1][i] == ' ' || argv[1][i] == '\t')
            flag = 1;
        else
        {
            if (flag)
            {
                ft_putchar(' ');
                ft_putchar(' ');
                ft_putchar(' ');
            }
            flag = 0;
            ft_putchar(argv[1][i]);
        }
        i++;
    }
    ft_putchar('\n');
    return (0);
}