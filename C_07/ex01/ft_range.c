/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 18:13:50 by jtoumani          #+#    #+#             */
/*   Updated: 2025/02/05 13:42:56 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	while (min + i < max)
	{
		i++;
	}
	range = (int *)malloc(i * sizeof(int));
	i = 0;
	while (min + i < max)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
// 	int main(void)
// {
// 	int *i;
// 	i = ft_range(1, 5);
// 	printf("%d", i[3]);
// 	return (0);
// }