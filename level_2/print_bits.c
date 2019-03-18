#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void     handle_power(int base, int expo)
{
    int i;
    char new_char[100];
    
    i = 0;
    while (expo)
    {
        new_char[i] = itoa(base);
        expo--;
        i++;
    }
    printf("%s\n", new_char);
}

void     my_power(int base, int expo)
{
    handle_power(base, expo);
}

int     main()
{
    my_power(2, 3);
    // printf("%d\n", new_power(2, 1));
    return (0);
}

// int     my_power(unsigned char a, unsigned char b)
// {
//     if (b < 0)
//         return (1 / my_power(a, b));
//     else if (b == 0)
//         return (1);
//     else if (b == 1)
//         return (a);
//     else
//         return (a * my_power(a, b - 1));

// }

// void    print_bits(unsigned char octet)
// {
//     while (octet > 0)
//     {
//         8 times 
//     }
// }