#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_print_hex(void *str, int size);

int	main(void)
{
	char	str[] = "ola";
	char	c[] = "jesus";
	int		n[] = {42, 21, 21, 42};
	//int		num[] = {42, 21, 21, 42};
	//void	*address = &c;

	printf ("End str: %d\tHex str: %p\tVal str:%c\n", str, str, str[0]);
	ft_print_hex(str, 0);
	printf ("\nEnd c: %d\tHex c: %p\tVal c:%c\n", c, c, c[0]);
	ft_print_hex(c, 0);
	printf ("\nEnd n: %d\tHex n: %p\tVal n:%c\n", n, n, n[0]);
	ft_print_hex(n, 0);
	//printf("end c: %p\tval c: %c\n", address, *(int *)address);

	return 0;
}

void	ft_print_hexcod(void *str, int cycle)
{
	char	hex[42];
	char	lib[16];
	int	count;

	count = 0;
	while (lib[count] <= 15)
	{
		if (count < 10)
			lib[count] = ('0' + count);
		else
			lib[count] = ('a' + count - 10);
		count ++;
	}
	count = 0;
	cycle = (cycle * 16);
	while (count <= 40)
	{
		if (count % 5 != 0)
		{
			hex[count] = lib[((str[cycle] / 16) % 16)];
			count ++;
			hex[count] = lib[( str[cycle] % 16)];
			count ++;
			cycle ++;
		}
		ft_putchar (' ');
		count ++;
	}
}

