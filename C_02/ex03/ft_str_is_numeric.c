/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:27:58 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/26 15:08:03 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= '0' && str[a] <= '9')
		{
		}
		else
		{
			return (0);
		}
		a++;
	}
	return (1);
}

// int	main(void)
// {
// 	int o;
// 	o = ft_str_is_numeric("15dc2");
// 	printf("%d", o);
// 	return (0);
// }