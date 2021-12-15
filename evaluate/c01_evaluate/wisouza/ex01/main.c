#include <stdio.h>

void	ft_ultimate_ft(int *********nbr);

int	main(void)
{
	int valor1;
	int *valor2 = &valor1;
	int **valor3 = &valor2;
	int ***valor4 = &valor3;
	int ****valor5 = &valor4;
	int *****valor6 = &valor5;
	int ******valor7 = &valor6;
	int *******valor8 = &valor7;
	int ********valor9 = &valor8;
	int *********valor10 = &valor9;
	ft_ultimate_ft(valor10);
	printf ("%d", valor1);
	return (0);
}
