/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:40:50 by jtoumani          #+#    #+#             */
/*   Updated: 2025/02/05 18:56:40 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		h;
	int		length;
	int		lengthsep;
	char	*join;
	int		s;
	int		j;

	i = 0;
	length = 0;
	lengthsep = 0;
	

	if (size <= 0)
	{
		join = (char *)malloc(1* sizeof(char));
		join[0] = '\0';	
		return (join);
	}
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
	join = (char *)malloc((length + 1) * sizeof(char));
	if (join == NULL)
		return (NULL);
	i = 0;
	s = 0;
	j = 0;
	while (i < size)
	{
		h = 0;
		while (strs[i][h] != '\0')
		{
			join[j] = strs[i][h];
			j++;
			h++;
		}
		if (i < size - 1)
		{
			s = 0;
			while (sep[s] != '\0')
			{
				join[j] = sep[s];
				j++;
				s++;
			}
		}
		i++;
	}
	join[j] = '\0';
	return (join);
}
 int main()
 {
	char *strs[] = {};
	char *b;
	b = ft_strjoin(0, strs, ",");
	printf("%s", b);
	return (0);
}