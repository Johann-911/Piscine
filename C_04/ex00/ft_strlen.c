/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 13:21:31 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/30 12:42:40 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	length;
	int	a;

	length = 0;
	a = 0;
	while (str[a] != '\0')
	{
		a++;
		length++;
	}
	return (length);
}
// 	int main (void)
// {
// 	int length;
// 	char str[] = "Welcome";
// 	length = ft_strlen(str);
// 	printf("%d", length);
// 	return (0);
// }
