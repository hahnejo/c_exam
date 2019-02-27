#include <stdio.h>

int		is_power_of_2(unsigned int n)
{
	while (n > 1)
	{
		if (n % 2 != 0)
			return (0);
		n = n / 2;
	}
	return (1);
}

int		main()
{
	printf("%d\n", is_power_of_2(0));
	printf("%d\n", is_power_of_2(21));
	printf("%d\n", is_power_of_2(1024));
	printf("%d\n", is_power_of_2(4));
	printf("%d\n", is_power_of_2(32));
	printf("%d\n", is_power_of_2(128));
	return (0);
}
