#include <stdio.h>

int     check_num(int *tab, int current)
{
    int i = 0;
    int res;

    while (i < current)
    {
        if (tab[i] > tab[current])
            res = tab[i];
        i++;
    }
    return (res);
}

int		max(int *tab, unsigned int len)
{
    int i;

    i = 0;
    while (tab[i])
    {
        max = check_num(tab, i);
        i++;
    }
    return (max);
}

int     main()
{
    int int_array[5];

    int_array[0] = 99;
    int_array[1] = 1;
    int_array[2] = 12;
    int_array[3] = 5;
    int_array[4] = 6;
    max(int_array, 5);
    return (0);
}

// if first > next,
// first = max
// if (max > next)
// 