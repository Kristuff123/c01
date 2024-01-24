#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b !=0)
	{
		*div = a/b;
		*mod = a%b;
	}
}

int	main(void)
{
	int div, mod, n, m;

	n = 42;
	m = 21;

	ft_div_mod(n, m, &div, &mod);
	printf("\n%d/%d = %d with remainder %d\n", n, m, div, mod);
	return 0;
}
