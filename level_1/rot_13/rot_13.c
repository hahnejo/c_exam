#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rot_13(char *argv)
{
    int i;

    i = 0;
    while (argv[i]) {
        if (argv[i] >= 'A' && argv[i] <= 'M')
            ft_putchar(argv[i] + 13);
        else if (argv[i] >= 'N' && argv[i] <= 'Z')
            ft_putchar(argv[i] - 13);
        else if (argv[i] >= 'a' && argv[i] <= 'm')
            ft_putchar(argv[i] + 13);
        else if (argv[i] >= 'n' && argv[i] <= 'z')
            ft_putchar(argv[i] - 13);
        else
            ft_putchar(argv[i]);
        i++;
    }
    ft_putchar('\n');
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        rot_13(argv[1]);
    }
    else
    {
        ft_putchar('\n');
        return (-1);
    }
    return (0);
}