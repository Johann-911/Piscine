/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:40:00 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/28 13:14:09 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0' && a < n)
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	if (a < n)
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
	}
	return (0);
}
//  int main(void)
// {
// 	int n;
// 	n = 8;
// 	int o;
// 	char s1[] = "";
// 	char s2[] = " hello";
// 	o = ft_strncmp(s1, s2, n);
// 	printf("%d", o);
// 	return (0);
// }