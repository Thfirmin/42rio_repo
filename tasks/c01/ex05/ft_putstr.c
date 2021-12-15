#include <unistd.h>

void	ft_putstr(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		write (1, &str[x], 1);
		x++;
	}
}

int	main(void)
{
	char	teste[] = "Hello4242?1-+= World";

	ft_putstr(teste);
	return (0);
}
