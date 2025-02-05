/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:47:37 by jtoumani          #+#    #+#             */
/*   Updated: 2025/02/04 13:07:11 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	length;

	i = argc - 1;
	length = 0;
	if (argc <= 0)
		return (0);
	while (i > 1)
	{
		while (argv[i][length] != '\0')
		{
			write(1, &argv[i][length], 1);
			length++;
		}
		write(1, "\n", 1);
		length = 0;
		i--;
	}
	return (0);
}
