#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
	return (((octet >> 4) & 0x0f) | (octet & 0x0f) << 4);
}

int		main(void)
{
	unsigned char a = 202;
	printf("%d\n", swap_bits(a));
	return (0);
}
