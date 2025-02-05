/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:21:29 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/26 18:43:07 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	a;
	int	flag;

	a = 0;
	flag = 1;
	while (str[a] != '\0')
	{
		if (str[a] >= 'A' && str[a] <= 'Z')
		{
			str[a] = str[a] + 32;
		}
		if (flag == 1 && str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - 32;
			flag = 0;
		}
		else if (!(str[a] >= 'a' && str[a] <= 'z') || (str[a] >= 'A'
				&& str[a] <= 'Z') || (str[a] >= '0' && str[a] <= '9'))
			flag = 1;
		if (str[a] >= '0' && str[a] <= '9')
			flag = 0;
		a++;
	}
	return (str);
}
	int main (void)
{
	char k[] = "salut, coM!Ment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(k);
	printf("%s", k);
	return (0);
}
