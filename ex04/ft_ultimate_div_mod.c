/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kristof <kaeres.krs@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:22:56 by kristof           #+#    #+#             */
/*   Updated: 2024/01/22 21:23:13 by kristof          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	
	if (*b !=0)
	{
		c = *a;
		*a = *a / *b;
		*b = c % *b;
	}
}

int main(void)
{
	int	a, b;
	a = 42;
	b = 21;
	printf("a=%d b=%d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a divided by b is %d, module is %d\n", a, b);
	return 0;
}
       	
