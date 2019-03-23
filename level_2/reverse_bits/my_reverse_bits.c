#include <stdio.h>

unsigned char   reverse_bits(unsigned char octet)
{
    // as we iterate, push << once
    unsigned char arr[8] = {'0', '0', '0', '0', '0', '0', '0', '0'};
    unsigned char num = 128;
    unsigned char ans = 0xff;
    while (octet != 0)
    {
        if (octet >= 128)
        {
            octet -= num;
        }
        else
            ans << 0;
        num /= 2;
    }
    printf("ans is : %d\n", ans);
    return (octet);
}

int     main()
{
    unsigned char octet;
    octet = 12;
    unsigned char no_of_bits = sizeof(octet) * 8;

    printf("%d\n", no_of_bits);
}