/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_map.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 19:50:32 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/26 20:15:08 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

void initialize_map(int map[size][size])
{
	for (int x = 0; x < size; x++)
	{
		for(int y = 0; y <size; y++)
		{
			map[x][y] = 0;
		}
	}
}

	void print_map(int map[size][size])
{
	char buffer[size * 2];
	int index;
	int x;
	int y;
	
	for(x = 0; x < size; x++)
	{
		index = 0;
				
		for(y = 0; < size; y++)
		{
			buffer[index++] = map[x][y] + '0';
			buffer[index++] = ' ';
		}
		buffer[index-1] = '\n';
		write(1, buffer, index);
	}
}