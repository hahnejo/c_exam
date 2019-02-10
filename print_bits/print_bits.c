// takes a byte and prints in binary

// void    print_bits(unsigned char octet)
// {
//     write(1, &oct)
// }

#include <stdio.h>
#include <unistd.h>

int main()
{
    char octet = ;
    int oct;
    int divi = 128;

    oct = octet;
    while (divi != 0)
    {
        if (divi <= octet)
            oct %= divi;
        else
            write(1, "0", 1);
    }
    divi /= 2;
    // while division is not 0
    // if division is less than octet
    // octet = octet modulo division
    // else print out only zero
    // division / 2 and save it to div
}

2 = 0000 0010
8 = 0000 1000
