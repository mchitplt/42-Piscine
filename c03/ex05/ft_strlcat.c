/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:23:48 by mupolat           #+#    #+#             */
/*   Updated: 2022/10/26 14:56:12 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;
	unsigned int	destlen;
	unsigned int	strlen;

	i = 0;
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	destlen = x;
	strlen = ft_strlen(src);
	if (size == 0 || size <= destlen)
		return (strlen + size);
	while (src[i] != '\0' && i < size - destlen - 1)
	{
		dest[x] = src[i];
		i++;
		x++;
	}
	dest[x] = '\0';
	return (destlen + strlen);
}

/*
int main (void)
{
	char src[] = "Born to code";
    	char dest [] = "1337 42";
    printf("%i \n", ft_strlcat(dest, src, 20));
    printf("%s \n", dest);
}	
*/
