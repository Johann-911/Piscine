/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 17:28:55 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/26 14:50:22 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a' && str[a] <= 'z') || (str[a] >= 'A'
				&& str[a] <= 'Z'))
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
// 	int	o;

// 	o = ft_str_is_alpha("");
// 	printf("%d", o);
// 	return (0);
// }
