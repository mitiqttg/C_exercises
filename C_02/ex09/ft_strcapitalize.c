/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <ttran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:16:29 by ttran             #+#    #+#             */
/*   Updated: 2024/07/04 15:16:30 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	factor(char *str, int i, int begin_word)
{
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (begin_word)
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 'a' + 'A';
				}
				begin_word = 0;
			}
			else
			{
				if (str[i] >= 'A' && str[i] <= 'Z')
					str[i] = str[i] - 'A' + 'a';
			}
		}
		else
			begin_word = 1;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	begin_word;

	i = 0;
	begin_word = 1;
	factor(str, i, begin_word);
	return (str);
}
