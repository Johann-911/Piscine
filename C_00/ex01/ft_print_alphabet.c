/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 14:49:38 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/17 20:33:03 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(char c)

{
	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}
	int	main()
{
	ft_print_alphabet('c');
	return 0;
}
