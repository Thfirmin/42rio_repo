#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
        unsigned int     x;

        x = 0;
	while ((x < n) && (src[x] != '\0'))
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

        return (dest);
}

int     main(void)
{
        int     x;
	unsigned int	n;
	char    src[] = "ola, mundo";

        x = 0;
        while (src[x] != '\0')
        {
                x++;
        }
        char    dest[x];

	n = 7;
        ft_strncpy(dest, src, n);
        printf("src: %s\n", src);
        printf("dest: %s", dest);
}
