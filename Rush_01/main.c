/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 19:02:47 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/26 19:50:10 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
	if(argc != 2 || arg[] < 0 && arg[] > 4 )
	{
		write(1, "Error\n", 6)
		return 1;	
	}
	int cols[16]; 
	colup(argv[1], cols);
	int map[size][size];
	initialize_map(map);
	
	print_map(map);
	
	return 0;
}
