/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colups.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jtoumani <jtoumani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 15:59:24 by jtoumani          #+#    #+#             */
/*   Updated: 2025/01/26 20:10:14 by jtoumani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define Size 4

void colup(char *arg, int *cols)
{
	int i;
	i = 0;
	int count;
	count = 0;
	while(arg[i] != '\0')
	{
		if (arg[i] >= '1' && arg[i] < '4')	
		{
			cols[count] = arg[i] - '0';
			count ++;
		}
		i++;
	}
}
