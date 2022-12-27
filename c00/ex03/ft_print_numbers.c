/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogyildiz <ogyildiz@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 23:13:32 by ogyildiz          #+#    #+#             */
/*   Updated: 2022/10/15 23:13:44 by ogyildiz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	x;	

	x = '0';
	while (x <= '9')
	{
		write(1, &x, 1);
		x++;
	}
}
