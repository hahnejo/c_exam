#include <stdio.h>

unsigned char   reverse_bits(unsigned char octet)
{
    unsigned char arr[8] = {'0', '0', '0', '0', '0', '0', '0', '0'};
    unsigned char new[8] = {'0', '0', '0', '0', '0', '0', '0', '0'};
    unsigned char num = 128;
    unsigned char i = 0;
    unsigned char j = 0;
    while (octet != 0)
    {
        if (octet >= num)
        {
            arr[i] = '1';
            octet -= num;
        }
        else
            arr[i] = '0';
        num /= 2;
        i++;
    }
    i--;
    while (i >= 0 && j <= 7)
    {
        new[j] = arr[i];
        i--;
        j++;
    }
    i = 0;
    num = 128;
    octet = 0;
    while (i < 8)
    {
        if (new[i] == '1')
            octet += num;
        num = num / 2;
        i++;
    }
    return (octet);
}

int     main()
{
    printf("res : %d\n", reverse_bits(9));
    return (0);
}