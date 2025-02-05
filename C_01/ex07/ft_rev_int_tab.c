/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 11:44:06 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/28 17:24:33 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	z;
	int	a;
	int	b;

	a = 0;
	b = size - 1;
	while (a < b)
	{
		z = tab[a];
		tab[a] = tab[b];
		tab[b] = z;
		a++;
		b--;
	}
}
 int main(void)
 {
	int tab[3] = {1, 2,3};
	int size = 3;
	for (int y = 0;
		y < size;
		y++)
		{
			printf("%d", tab[y]);
		}
	ft_rev_int_tab(tab , size);
	printf("\n");
	for (int y = 0;
		y < size;
		y++)
		{
			printf("%d", tab[y]);
		}
	return (0);
 }