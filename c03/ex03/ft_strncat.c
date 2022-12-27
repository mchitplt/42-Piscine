/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 02:36:33 by mupolat           #+#    #+#             */
/*   Updated: 2022/10/26 14:16:10 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	a = 0;
	while (a < nb && src[a] != '\0')
	{
		dest[i + a] = src[a];
		a++;
	}
	dest[i + a] = '\0';
	return (dest);
}
