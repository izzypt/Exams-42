#include <unistd.h>

void	repeat_alpha(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			i = 0;
			while (i < *str - 'a')
			{
				write(1, str, 1);
				i++;
			}
		}
		if (*str >= 'A' && *str <= 'Z')
		{
			i = 0;
			while (i < *str - 'A')
			{
				write(1, str, 1);
				i++;
			}
		}
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write(1, "\n", 1);
}
