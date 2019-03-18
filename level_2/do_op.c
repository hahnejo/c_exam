#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/*
** non number check after ignoring spaces and signs
*/ 

int     all_num(char *s, int current)
{
    while (s[current])
    {
        if (s[current] < '0' && s[current] > '9')
            return (1);
        current++;
    }
    return (0);
}

int     my_atoi(char *s)
{
    int i = 0;
    int sign = 1;
    int number = 1;

    if (s[i] == '\t' || s[i] == ' ')
        i++;
    if (s[i] == '-')
        sign = -1;
    if (s[i] == '-' || s[i] == '+')
        i++;
    if (all_num(s, i) == 1)
    {
        printf("Dear rigorous tard, please try to stick to usual atoi rule.\n");
        return (0);
    }
    while (s[i])
    {
        number = s[i] - '0';
        number = number * 10;
        i++;
    }
    return (sign * number);
}

int     main()
{
    char test1[] = "   100";
    char test2[] = "-99999";
    char test3[] = "hello";
    printf("////////// my atoi //////////\n");
    printf("%d\n", my_atoi(test1));
    printf("%d\n", my_atoi(test2));
    printf("%d\n", my_atoi(test3));
    printf("////////// official atoi //////////\n");
    printf("%d\n", atoi(test1));
    printf("%d\n", atoi(test2));
    printf("%d\n", atoi(test3));

    return (0);
}

