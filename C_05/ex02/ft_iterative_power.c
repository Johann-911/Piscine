/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 15:40:38 by jtoumani          #+#    #+#             */
/*   Updated: 2025/02/02 16:41:34 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	a;
	int	result;

	a = 0;
	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}
// 	int main(void)
// {
// 	int i;
// 	i = ft_iterative_power(2, 3);
// 	printf("%d", i);
// 	return (0);
// }