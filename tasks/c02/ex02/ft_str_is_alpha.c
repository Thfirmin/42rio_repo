#include <stdio.h>
int	ft_str_is_alpha(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		return (1);
	else if (*str >= 'A' && *str <= 'Z')
		return (1);
	else if (*str == '\0')
		return (1);
	else
		return (0);
}

int	main(void)
{
	char	stir;
	int	x;
	
	stir = "abcdefghij";
	x = ft_str_is_alpha(stir);
	printf ("str1: %s / %d", stir, x);
	stir = "a1b2c3";
	x = ft_str_is_alpha(stir);
	printf ("str2: %s / %d", stir, x);
	stir = "abc/d?";
	x = ft_str_is_alpha(stir);
	printf ("str3: %s / %d", stir, x);
	stir = "";
	x = ft_str_is_alpha(stir);
	printf ("str4: %s / %d", stir, x);
}
