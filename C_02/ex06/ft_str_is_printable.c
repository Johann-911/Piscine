/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 20:43:31 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/23 18:49:54 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_str_is_printable(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 32 && str[a] <= 126)
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

//  int main(void)
//  {
// 	int o;
// 	o = ft_str_is_printable(" \n ");
// 	printf("%d", o);
// 	return (0);
//  }
