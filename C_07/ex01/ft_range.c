/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <ttran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 17:14:32 by ttran             #+#    #+#             */
/*   Updated: 2024/07/15 17:14:34 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*result;
	int	i;

	i = 0;
	size = max - min;
	if (size <= 0)
		return ((int *)0);
	result = (int *)malloc(size * sizeof (int));
	while (min + i < max)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
