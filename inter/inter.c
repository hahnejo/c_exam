#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	inter(char *str1, char *str2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (str1[i])
	{
		if (str1[i] == str2[j])
			ft_putchar(str1[i]);
		j++;
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		inter(argv[1], argv[2]);
		ft_putchar('\n');
	}
	else
		ft_putchar('\n');
	return (0);
}
