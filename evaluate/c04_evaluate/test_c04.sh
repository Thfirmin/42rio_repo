#!/bin/sh
echo "#include <stdio.h>

int	main(void)
{
	int	c;
	char	str1[] = "0987654321";
	char	str2[] = "testando!";
	char	str3[] = "t3s t4n\n d0?!";

	c = ft_strlen(str1);
	printf ("str1: %d", c);
	c = ft_strlen(str2);
	printf ("str2: %d", c);
	c = ft_strlen(str3);
	printf ("str3: %d", c);

	return (0);
}" > main.c
mv main.c ex00/
