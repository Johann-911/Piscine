/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 11:10:14 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/16 18:35:23 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	o;

	o = 'z';
	while (o >= 'a' )
	{
		write (1, &o, 1);
		o--;
	}
}
	// int main ()
	// {
	// 	ft_print_reverse_alphabet();
	// 	return 0;
	// }