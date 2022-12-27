/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogyildiz <ogyildiz@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 02:08:17 by ogyildiz          #+#    #+#             */
/*   Updated: 2022/10/16 03:21:27 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	yazdir(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				yazdir(a + '0');
				yazdir(b + '0');
				yazdir(c + '0');
				if (a != 7)
					write (1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
