/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 19:11:44 by jtoumani          #+#    #+#             */
/*   Updated: 2025/02/05 13:51:17 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	while (min + i < max)
	{
		i++;
	}
	*range = (int *)malloc(i * sizeof(int));
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	if (*range == NULL)
		return (-1);
	i = 0;
	while (min + i < max)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (i);
}
// int	main(void)
// {
// 	int	*a;
// 	int	b;

// 	b = ft_ultimate_range(&a, 0, 5);
// 	printf("%d", b);
// 	return (0);
// }
