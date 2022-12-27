/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 16:26:15 by mupolat           #+#    #+#             */
/*   Updated: 2022/10/27 21:10:42 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int	ft_atoi(char *str)
{
	int	mortal;
	int	combat;
	int	i;

	mortal = 1;
	combat = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
	{
		i++;
	}
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			mortal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		combat = (combat * 10) + (str[i] - '0');
		i++;
	}
	combat *= mortal;
	return (combat);
}
/*
int main(void)
{
	char *s = "   ---+--+0123  4506ab567";
	printf("%d", ft_atoi(s));
}
*/
