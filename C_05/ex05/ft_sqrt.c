/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:36:07 by jtoumani          #+#    #+#             */
/*   Updated: 2025/02/02 16:41:55 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	while (a * a != nb)
	{
		if (a * a > nb)
			return (0);
		if (a > 46340)
			return (0);
		a++;
	}
	return (a);
}

// int main()
// {
// 	int res = ft_sqrt(234262342);
// 	printf("res is %d\n", res);
// 	return (0);
// }