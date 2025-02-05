/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 18:51:09 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/20 15:58:04 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	numbers;

	numbers = 0;
	while (*str)
	{
		str++;
		numbers++;
	}
	return (numbers);
}
// int	main(void)
// {
// 	char *str = "Wilkommen 42";
// 	int numbers = ft_strlen(str);
// 	printf("\nNumbers : %d", numbers);
// 	return (0);
// }