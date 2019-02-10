/*
** write function that takes a byte, then prints in binary
** if pass 2 into function, it will print 00000010
** only write function is allowed
*/

#include <unistd.h>

void    print_bits(unsigned char octet)
{
    int z;
    int oct;

    z = 128;
    oct = octet;
    while (z > 0)
    {
        if (oct & z)
    }
    
}

int main(void)
{
    unsigned char number;

    number = '8';
    print_bits(number);
    return (0);
}