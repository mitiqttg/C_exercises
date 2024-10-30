/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <ttran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 13:02:32 by ttran             #+#    #+#             */
/*   Updated: 2024/06/27 13:06:27 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	checker(int i, int j, int k)
{
	char	triple[];

	triple = {'0' + i, '0' + j, '0' + k, ',', ' '};
	if (i == 7 && j == 8 && k == 9)
	{
		write(1, triple, 3);
	}
	else
	{
		write(1, triple, 5);
	}
}

void	ft_print_digit(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = i + 1;
	k = j + 1;
	while (i <= 7)
	{
		while (j <= 8)
		{
			while (k <= 9)
			{
				checker(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
