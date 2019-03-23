#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}

int     ft_isspace(char *str)
{
    int i;
    i = 0;
    while (str[i])
    {
        if (str[i] != ' ' || str[i] != '\t')
            return (1);
        i++;
    }
    return (0);
}

// returns -1 when input is all spaces or tabs.
#define LENGTH_ADJUST 1
int     start_num(char *str)
{
    int i = 0;
    while (str[i] && (str[i] == '\t' || str[i] == ' '))
        i++;
    return (i);
}

int     end_num(char *str)
{
    int end = ft_strlen(str) - 1;

    while (str[end] == ' ' || str[end] == '\t')
        end--;
    printf("end num : %d\n", end);
    return (end + 1);
}

void    expand_str(char *str, int start, int end)
{
    while (start < end)
    {
        if (str[start] != '\t' && str[start] != ' ')
            ft_putchar(str[start]);
        else
        {
            while (str[start] == '\t' || str[start] == ' ')
                start++;
            write(1, "   ", 3);
            start--;
        }
        start++;
    }
}

int     main(int argc, char **argv)
{
    int len;
    int start;
    int end;

    if (argc == 2)
    {
        len = ft_strlen(argv[1]);
        start = start_num(argv[1]);
        end = end_num(argv[1]);
        if (ft_isspace(argv[1]) == 0)
        {
            ft_putchar('\n');
            return (-1);
        }
        expand_str(argv[1], start, end);
    }
    ft_putchar('\n');
    return (0);
}