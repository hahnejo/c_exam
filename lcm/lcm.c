#include <stdio.h>

unsigned int    gcd(unsigned int a, unsigned int b)
{
    if (a == 0)
        return (b);
    return (gcd(b % a, a));
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    return (a * b / gcd(a, b));
}

int         main()
{
    int a = 180;
    int b = 200;
    printf("%d\n", lcm(a, b));
}
// lcm (a and b) = | a * b | / gcd(a and b)