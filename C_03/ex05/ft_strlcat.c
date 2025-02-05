/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:47:03 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/28 13:14:26 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	a;
	int	b;
	int	length;

	a = 0;
	b = 0;
	length = 0;
	while (dest[a] != '\0' && a < size)
	{
		a++;
	}
	while (src[b] != '\0' && a < size - 1)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a] = '\0';
	return (det);
}
// 	int main (void)
// {
// 	unsigned int size;
// 	char src[] = "Welcome ";
// 	char dest[] = "to 42";
// 	ft_strlcat(dest, src, size);
// 	printf("%s", dest);
// 	return (0);

// }