#include <unistd.h>

void    print_bits(unsigned char octet)
{
    int num;
    
    num = 128;
    while (num != 0)
    {
        if (octet >= num)
        {
            octet -= num;
            write(1, "1", 1);
        }
        else
            write(1, "0", 1);
        num = num / 2;
    }
}

int     main()
{
    unsigned char octet = 42;
    print_bits(octet);
    return (0);
}