/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 19:23:04 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/26 15:01:58 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;

	a = 0;
	while (src[a] != '\0' && a < size)
	{
		dest[a] = src[a];
		a++;
		size++;
	}
	dest[size - 1] = '\0';
	return (size);
}

// int main (void)
// {
// 	int n;
// 	n = 10;
// 	char	src[]  = "Draven main ";
// 	char	dest[] = "Garen befibeiuvbriurbv";
// 	ft_strlcpy(dest, src, n);
// 	printf("%s", dest);
// 	return (0);
// }
