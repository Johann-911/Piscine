/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:04:34 by jtoumani          #+#    #+#             */
/*   Updated: 2025/02/01 15:26:52 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	a;
	int	result;

	a = 1;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb >= a)
	{
		result = result * a;
		a++;
	}
	return (result);
}
// int main (void)
// {
// 	int i;
// 	i = ft_iterative_factorial(5);
// 	printf("%d", i);
// 	return (0);

// }