/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:26:07 by jtoumani          #+#    #+#             */
/*   Updated: 2025/02/05 14:26:53 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;
	int	length;

	a = 0;
	b = 0;
	length = ft_strlen(to_find);
	if (to_find[a] == '\0')
		return (str);
	while (str[a] != '\0')
	{
		b = 0;
		while (str[a] == to_find[b])
		{
			a++;
			b++;
			if (to_find[b] == '\0')
				return (&(str[a - length]));
		}
		a++;
	}
	return (0);
}
	int main(void)
{
	char *output;
	char str[] = "Welcome to 42";
	char to_find[] = "to";
	output = ft_strstr(str, to_find);
	printf("%s", output);
	return (0);
}