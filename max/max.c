#include <stdio.h>

int		max(int* tab, unsigned int len)
{
    int max;
    int i;
    unsigned int iter;

    if (!tab)
        return (0);
    i = 0;
    max = 0;
    iter = 0;
    while (iter <= len)
    {
        // if current is bigger than next
        // current becomes max
        // 
        if (tab[i] > tab[i + 1])
            max = tab[i];
        i++;
    }
    // printf("%d\n", max);
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