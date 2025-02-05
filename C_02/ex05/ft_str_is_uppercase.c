/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 20:34:22 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/26 15:09:31 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
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
// 	o = ft_str_is_uppercase("welc26ome");
// 	printf("%d", o);
// 	return (0);
//  }
