//#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}

//int	main(void)
//{
//	int divisor;
//	int modulo;
//
//	ft_div_mod(7, 2, &divisor, &modulo);
//	printf("div: %d mod: %d", divisor, modulo);
//}
