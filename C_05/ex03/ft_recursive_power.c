/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 16:07:34 by jtoumani          #+#    #+#             */
/*   Updated: 2025/02/02 16:41:41 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = ft_recursive_power(nb, power - 1);
	return (nb * result);
}
// 	int main (void)
// {
// 	int i;
// 	i = ft_recursive_power(2, 3);
// 	printf("%d", i);
// 	return (0);
// }