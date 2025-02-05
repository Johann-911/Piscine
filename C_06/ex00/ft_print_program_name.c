/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 16:44:08 by jtoumani          #+#    #+#             */
/*   Updated: 2025/02/04 13:06:49 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	length;

	length = 0;
	argc = 1;
	if (argc <= 0)
		return (0);
	while (argv[0][length] != '\0')
	{
		length++;
	}
	write(1, argv[0], length);
	write(1, &"\n", 1);
	return (0);
}
