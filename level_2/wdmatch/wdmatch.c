// per str1[i], iterate for str[j] if macthes. if a match, break and next return zero
// when zero is returned then do the same process but print along the way/.

#include <unistd.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
    int i = -1;
    while (str[++i])
    ;
    return (i);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i = -1;
    while (str[++i])
        ft_putchar(str[i]);
}

int     wdmatch(char *str1, char *str2)
{
    int i = 0;
    int j;
    int count = 0;

    while (str1[i])
    {
        j = 0;
        while (str2[j])
        {
            if (str2[j] == str1[i])
            {
                count++;
                break;
            }
            j++;
        }
        printf("%c\n", str1[i]);
        printf("count : %d\n", count);
        i++;
    }
    return (0);
}

int     main(int argc, char **argv)
{
    if (argc == 3)
    {
        if (wdmatch(argv[1], argv[2]) == -1)
        {
            printf("strlen : %d\n", ft_strlen(argv[1]));
            ft_putchar('\n');
            return (-1);
        }
        else
            ft_putstr(argv[1]);
    }
    ft_putchar('\n');
    return (0);
}