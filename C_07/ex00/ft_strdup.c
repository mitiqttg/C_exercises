/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <ttran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 14:15:22 by ttran             #+#    #+#             */
/*   Updated: 2024/07/15 14:15:24 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char				*str;
	int					len;
	int					i;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	str = (char *)malloc((len + 1) * sizeof (char));
	if (str == NULL)
		return (NULL);
	while (i <= len)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
