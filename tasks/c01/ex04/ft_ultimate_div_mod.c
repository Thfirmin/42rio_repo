//#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	div = (*a / *b);
	*b = (*a - *b * div);
	*a = div;
}

//int	main()
//{
//	int	numdiv;
//	int	denmod;
//
//	numdiv = 7;
//	denmod = 2;
//	ft_ultimate_div_mod(&numdiv, &denmod);
//	printf("diva: %d modb: %d", numdiv, denmod);
//}
