#include <stdio.h>
char *ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	*(dest + x) = '\0';
	
	return (dest);
}

int	main(void)
{
	int	x;
	char	src[] = "ola, mundo";

	x = 0;
	while (src[x] != '\0')
	{
		x++;
	}
	char	dest[x];

	ft_strcpy(dest, src);
	printf("src: %s\n", src);
	printf("dest: %s", dest);
}
