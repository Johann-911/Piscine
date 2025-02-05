/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 13:26:34 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/30 15:58:53 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	signs(int sign, char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] == '-')
		{
			sign++;
		}
		a++;
	}
	if (sign % 2 != 0)
		sign = -1;
	else
		sign = 1;
	return (sign);
}

int	ft_atoi(char *str)
{
	int	a;
	int	sign;
	int	output;

	a = 0;
	output = 0;
	sign = signs(0, str);
	while (str[a] != '\0' && !(str[a] >= '0' && str[a] <= '9'))
	{
		if ((str[a] >= 'a' && str[a] <= 'z') || (str[a] >= 'A'
				&& str[a] <= 'Z'))
			return (0);
		else
			a++;
	}
	while (str[a] >= '0' && str[a] <= '9')
	{
		output = output * 10 + (str[a] - '0');
		a++;
	}
	return (sign * output);
}
// 	int main(void)
// {
// 	char str[] = "+--+-+- 567";
// 	int atoii = atoi (str);
// 	int i = ft_atoi(str);

// 	printf("%d \n", i);
// 	printf("%d", atoii);
// 	return (0);
// }
