/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 11:50:17 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/23 18:50:02 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - 32;
		}
		a++;
	}
	return (str);
}
// 	int main (void)
// {
// 	char k [] = "rnvp";
// 	ft_strupcase(k);
// 	printf("%s", k);
// 	return (0);
// }
