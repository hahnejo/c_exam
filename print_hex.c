#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int     simple_atoi(char *ascii)
{
    int number;
    int sign;
    int i;

    number = 0;
    i = 0;
    sign = 1;
    if (ascii[i] == '-')
        sign = -1;
    if (ascii[i] == '+' || ascii[i] == '-')
        i++;
    while (ascii[i] && (ascii[i] >= '0' && ascii[i] <= '9'))
    {
        number = 10 * number + ascii[i] - '0';
        i++;
    }
    return (sign * number);
}

int     ft_strlen(char *str)
{
    int i;

    i = -1;
    while (str[++i]);
    return (i + 1);
}

void    print_hex(int number, int length)
{
    int i;
    int j;
    int remain;
    char *ans;

    ans = malloc(sizeof(char) * length);
    i = 0;
    while (number != 0)
    {
        remain = number % 16;
        if (remain <= 9)
        {
            ans[i] = remain + '0';
            i++;
        }
        else
        {
            ans[i] = remain + '7';
            i++;
        }
        number = number / 16;
    }
    // printf("ans = %s\n", ans);
    j = i - 1;
    while (j >= 0)
    {
        ft_putchar(ans[j]);
        j--;
    }
    free (ans);
}

int     main(int argc, char **argv)
{
    int number;
    int num_len;

    num_len = ft_strlen(argv[1]);
    if (argc == 2)
    {
        // print_hex(argv[1]);
        number = simple_atoi(argv[1]);
        print_hex(number, num_len);
        ft_putchar('\n');
    }
    else
        return (-1);
    return (0);
}