/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:28:07 by jtoumani          #+#    #+#             */
/*   Updated: 2025/02/02 16:41:17 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int	a;
	int	result;

	a = 1;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = ft_recursive_factorial(nb - 1);
	return (nb * result);
}
// int main (void)
// {
// 	int i;
// 	i = ft_recursive_factorial(5);
// 	printf("%d", i);
// 	return (0);
// }