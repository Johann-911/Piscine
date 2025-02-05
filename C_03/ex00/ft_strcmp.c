/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:26:34 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/28 13:14:06 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return ((char)s1[a] - (char)s2[a]);
		}
		a++;
	}
	return ((char)s1[a] - (char)s2[a]);
}
//   int main(void)
// {
// 	int o;
// 	char s1[] ="abcd";
// 	char s2[] = "abcvfd";
// 	o = ft_strcmp(s1, s2);
// 	printf("%d", o);
// 	return (0);
// }
