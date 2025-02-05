/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/19 17:34:08 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/20 15:55:53 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// int	main(void)
// {
// 	int a = 15;
// 	int b = 2;
// 	int div;
// 	int mod;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("Div : %d, Modul: %d", div, mod);
// 	return (0);
// }