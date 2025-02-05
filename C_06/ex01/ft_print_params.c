/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 18:04:43 by jtoumani          #+#    #+#             */
/*   Updated: 2025/02/02 18:47:09 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	length;

	i = 1;
	length = 0;
	if (argc <= 0)
		return (0);
	while (i < argc)
	{
		while (argv[i][length] != '\0')
		{
			write(1, &argv[i][length], 1);
			length++;
		}
		write(1, "\n", 1);
		length = 0;
		i++;
	}
	return (0);
}

// while(argv[0][0] != '\0')
// {
// 	write(1, argv[i][0], 1);
// 	i++;
// }
// argc = i;
// return (0);
