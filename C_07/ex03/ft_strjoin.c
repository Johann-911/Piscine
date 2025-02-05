/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:10:22 by jtoumani          #+#    #+#             */
/*   Updated: 2025/02/05 21:43:27 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	join_length(char *sep, int size, char **strs)
{
	int	lengthsep;
	int	length;
	int	i;
	int	h;

	i = 0;
	length = 0;
	lengthsep = 0;
	if (sep == NULL || strs == NULL)
		return (0);
	while (sep[lengthsep] != '\0')
		lengthsep++;
	while (i < size)
	{
		h = 0;
		while (strs[i][h] != '\0')
		{
			h++;
			length++;
		}
		i++;
	}
	length = length + lengthsep * (size - 1);
	return (length);
}

char	*join_malloc(int length, int size)
{
	char	*join;

	if (size <= 0)
	{
		join = (char *)malloc(1 * sizeof(char));
		join[0] = '\0';
		return (join);
	}
	join = (char *)malloc((length + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	join[0] = '\0';
	return (join);
}

char	*ft_strcat(char *dest, char *src)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		length;
	char	*join;
	int		i;

	i = 0;
	length = 0;
	join = (char *)malloc((length + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	length = join_length(sep, size, strs);
	join = join_malloc(length, size);
	while (i < size)
	{
		join = ft_strcat(join, strs[i]);
		if (i < size - 1)
			join = ft_strcat(join, sep);
		i++;
	}
	return (join);
}

//  int main()
//  {
// 	char *strs[] = {"Hallo", "Welt"};
// 	char *b;
// 	char *sep = "bbb";
// 	b = ft_strjoin(2, strs, sep);
// 	printf("%s", b);
// 	return (0);
// }