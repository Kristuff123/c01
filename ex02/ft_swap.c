#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;
	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int	n, m;

	n = 6;
	m = 9;
	printf("before\n %d %d\n", n,m);
	ft_swap(&n, &m);
	printf("after\n %d %d\n", n,m);
	return 0;
}
