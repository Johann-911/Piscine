/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:14:55 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/26 14:50:23 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}

// int	main(void)
// {
// 	int n;
// 	n = 6;
// 	char src[] = "yvdv ";
// 	char dest[] = "Garen b";
// 	ft_strncpy(dest, src, n);
// 	printf("%s", dest);
// 	return (0);
// }