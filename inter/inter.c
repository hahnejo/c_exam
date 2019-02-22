#include <unistd.h>
#include <string.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		duplicate(int index, char *str)
{
	int i;
	i = 0;
	while (i < index)
	{
		if (str[i] == str[index])
			return (1);
		i++;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int i, j;
	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (duplicate(i, argv[1]) == 0)
			{
				j = 0;
				while (argv[2][j])
				{
					if (argv[2][j] == argv[1][i])
					{
						ft_putchar(argv[1][i]);
						break;
						
					}
					j++;
				}
			}
			i++;
		}
	}
	else
		return (-1);
	return (0);
}