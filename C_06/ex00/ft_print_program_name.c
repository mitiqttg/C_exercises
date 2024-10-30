/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ttran <ttran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 20:31:50 by ttran             #+#    #+#             */
/*   Updated: 2024/07/13 20:31:51 by ttran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	len;

	len = 0;
	while (argv[0][len])
		len++;
	if (argc > 0)
	{
		write(1, argv[0], len);
		write(1, "\n", 1);
	}
	return (0);
}
