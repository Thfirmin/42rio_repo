#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		return (1);
	else if (*str >= 'A' && *str <= 'Z')
		return (1);
	else if (*str == '\0')
		return (0);
	else
		return (0);
}

int	main(void)
{
	char	*str;
	int	x;
	x = 0;
	str = "a";
	x = ft_str_is_alpha(str);
	printf ("%d\n", x);
}
