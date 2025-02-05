/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 10:10:58 by mausperg          #+#    #+#             */
/*   Updated: 2025/01/19 15:13:49 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern	void	ft_putchar(char c);

void	print_middle(int x, int firstLast)
{
	int	i;
	int	b;

	i = 0;
	b = x - 2;
	if (firstLast == 1)
	{
		while (i < b)
		{
			ft_putchar('B');
			i++;
		}
	}
	else
	{
		while (i < b)
		{
			ft_putchar(' ');
			i++;
		}
	}
}

void	print_header_footer(int x)
{
	ft_putchar('A');
	if (x > 1)
	{
		print_middle(x, 1);
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	print_body(int x, int y)
{
	int	i;
	int	b;

	i = 0;
	b = y - 2;
	while (i < b)
	{
		ft_putchar('B');
		print_middle(x, 0);
		if (x > 1)
		{
			ft_putchar('B');
		}
		ft_putchar('\n');
		i++;
	}
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
	{
		return ;
	}
	if (y == 1)
	{
		print_header_footer(x);
		return ;
	}
	print_header_footer(x);
	print_body(x, y);
	print_header_footer(x);
}
