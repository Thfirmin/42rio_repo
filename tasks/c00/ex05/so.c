#include <unistd.h>

void	ft_put_char(char a, char b, char c)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if ((a < '7') || (b < '8') || (c < '9'))
		write (1, ", ", 2);
	else
		write (1, "\n", 1);
}

int 	main()
{
	char frst_digit = '0';
	char scnd_digit;
	char thrd_digit;

	while (frst_digit <= '7')
	{
		scnd_digit = frst_digit + 1;
		while (scnd_digit <= '8')
		{
			thrd_digit = scnd_digit + 1;
			while (thrd_digit <= '9')
			{
				ft_put_char(frst_digit, scnd_digit, thrd_digit);
				thrd_digit++;
			}
			scnd_digit++;
		}
		frst_digit++;
	}
}
