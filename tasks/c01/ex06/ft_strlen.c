#include <stdio.h>

int ft_strlen(char *str)
{
	int x;
	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	return (x);
}

int	main(void)
{
	char	teste[] = "Hello World";
	int	caractere;
	caractere = ft_strlen(teste);
	printf("%d", caractere);
}
