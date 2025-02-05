/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 15:03:49 by jtoumani          #+#    #+#             */
/*   Updated: 2025/02/03 11:46:52 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	if (nb <= 1)
		return (0);
	while (a * a <= nb)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	return (1);
}
	int main(void)
{
	int i;
	i = ft_is_prime(4);
	printf("%d", i);
	return (0);
}
