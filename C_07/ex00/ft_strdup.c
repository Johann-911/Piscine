/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 11:07:11 by jtoumani          #+#    #+#             */
/*   Updated: 2025/02/05 21:47:18 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strdup(char *src)
{
	char	*dupe;
	int		i;

	i = 0;
	while (src[i])
		i++;
	dupe = (char *)malloc(i * sizeof(char));
	i = 0;
	while (src[i] != '\0')
	{
		dupe[i] = src[i];
		i++;
	}
	return (dupe);
}
// 	int main(void)
// {
// 	char *i;
// 	i = ft_strdup("hallo welt");
// 	printf("%s", i);
// 	return (0);

// }